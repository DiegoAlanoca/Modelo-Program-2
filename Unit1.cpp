//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
 ruta = "C:\\Users\\diego\\Desktop\\Modelo-Program-2\\Listados\\";
 nom = "Alumnos.dat";
 rutafinal=ruta+nom;
 AnsiString nomArch = ruta+nom;
 nomIdxcod = ruta+"IndicePorCod.idx";
 nomIdxNom = ruta+"InidicePorNom.idx";
 fstream f(nomArch.c_str(),ios::binary|ios::in);
 if (f.fail()) {
  f.open(nomArch.c_str(),ios::binary|ios::out);
 }
 f.close();
 }
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
 Edit1->Text="0";
 Edit2->Text="";
 Edit3->Text="";
 Edit4->Text="0";
 Edit5->Text="0";
 Edit6->Text="2000";
 Edit7->Text="0";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{ RegAlumno reg,regB; AnsiString nomArch=ruta+nom; bool hallado;
 AnsiString aux;
 reg.cod = (Word)StrToInt(Edit1->Text);
 aux = Edit2->Text;
 strcpy(reg.nom,aux.c_str());
 aux = Edit3->Text;
 strcpy(reg.dir,aux.c_str());
 reg.fecha.dia = StrToInt(Edit4->Text);
 reg.fecha.mes = StrToInt(Edit5->Text);
 reg.fecha.año = StrToInt(Edit6->Text);
 reg.telf = StrToInt(Edit7->Text);
 fstream f(nomArch.c_str(),ios::binary|ios::in|ios::out);
 if (!f.fail()) {
  hallado = false; //Buscar registro
  while (!f.eof()&&!hallado){
   f.read((char*)&regB,sizeof(regB));
   if (!f.eof()) {
	hallado = (reg.cod==regB.cod)&&(reg.marca!='*');
   }
  }
  if (hallado) {
   f.seekg(-sizeof(reg),ios::cur);
   f.write((char*)&reg,sizeof(reg));
  }
  else{
   f.close();
   f.open(nomArch.c_str(),ios::binary|ios::app);
   f.write((char*)&reg,sizeof(reg));
  }
 f.close();
 Button1Click(Sender);
 ShowMessage("Dato Guardado");
 }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{ /*AnsiString nomArch=ruta+nom;
 AnsiString cad=""; byte x;
 RegAlumno reg;
 fstream f(nomArch.c_str(),ios::binary|ios::in);
 f.read((char*)&reg,sizeof(reg));
 Edit1->Text = reg.cod;
 Edit2->Text = reg.nom;
 Edit3->Text = reg.dir;
 Edit4->Text = reg.fecha.dia;
 Edit5->Text = reg.fecha.mes;
 Edit6->Text = IntToStr(reg.fecha.año);
 f.close();*/
 RegAlumno reg;
 Edit1->Text = sizeof(reg);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button4Click(TObject *Sender)
{
  AnsiString nomArch = ruta+nom;
  AnsiString lis = ruta+"listado.txt";
  RegAlumno reg; AnsiString linea; Word i,n;
  fstream f1(nomArch.c_str(),ios::binary|ios::in); //Abrir el archivo en binario y de lectura
  fstream f2(lis.c_str(),ios::out); //Abre el archivo en modo Escritura, crea en cada ejecucion , borrando el que ya existia
  if (!f1.fail()) {
   linea = "                    LISTADO DE ALUMNOS";
   n = linea.Length();
   for (i = 1; i <= n; i++) {
	f2.put(linea[i]);
   }
   f2.put(10);
   while (!f1.eof()){
	f1.read((char*)&reg,sizeof(reg));
	if (!f1.eof()&&(reg.marca!='*')) {
	 linea = reg.cod;
	 linea = linea +","+reg.nom+","+reg.dir+","+reg.fecha.dia+"/"+reg.fecha.mes+"/"+reg.fecha.año+","+reg.telf;
	 n = linea.Length();
	 for (i = 1; i <= n; i++) {
	  f2.put(linea[i]);
	 }
	 f2.put(10);
	}
   }
   f1.close(); f2.close();
   ShowMessage("Listado Generaado");
  }
}
//---------------------------------------------------------------------------
 void ConvMayus(RegAlumno &reg){
  byte i,n,p;
  AnsiString min = "qwertyuiopasdfghjklñzxcvbnm";
  AnsiString may = "QWERTYUIOPASDFGHJKLÑZXCVBNM";
  n = strlen(reg.nom);
  for (i = 0; i < n; i++) {
   p = min.Pos(reg.nom[i]);
   if (p>0) {
	reg.nom[i]=may[p];
   }
  }

 }

void __fastcall TForm1::Button5Click(TObject *Sender)
{
 RegAlumno reg; AnsiString nomArch = ruta+nom; Cardinal p;
 fstream f(nomArch.c_str(),ios::binary|ios::in|ios::out); //Abriendo archivo en modo binario y escritura y lectura a la vez
 if (!f.fail()) {
   while (!f.eof()){
	f.read((char*)&reg,sizeof(reg)); //lee automaticamente desde el primer byte
	if (!f.eof()) {
	 ConvMayus(reg);
	 p = f.tellg(); //te proporciona en que byte esta el puntero
	 f.seekg(-sizeof(reg),ios::cur); //mueve el puntero (-) atras *magnitud , apartir de donde esta el puntero actual
	 f.write((char*)&reg,sizeof(reg)); //sobreescribe datos actualizado en reg
	 f.seekg(p);//volvemos el puntero a su posicion anterior ya que el acceso ahora es manual
	}
   }
   f.close();
   ShowMessage("Listado Actualizado");
 }
}
//---------------------------------------------------------------------------
 void ConvDir(RegAlumno &reg){
  byte i,n,p;
  AnsiString min = "qwertyuiopasdfghjklñzxcvbnm";
  AnsiString may = "QWERTYUIOPASDFGHJKLÑZXCVBNM";
  n = strlen(reg.dir);
  for (i = 0; i < n; i++) {
   p = min.Pos(reg.dir[i]);
   if (p>0) {
    reg.dir[i] = may[p];
   }
  }

 }
void __fastcall TForm1::Button6Click(TObject *Sender)
{
 RegAlumno reg; AnsiString nomArch = ruta + nom; Cardinal p;
 fstream f(nomArch.c_str(),ios::binary|ios::in|ios::out);
 if (!f.fail()) {
  while (!f.eof()){
   f.read((char*)&reg,sizeof(reg));
   if (!f.eof()) {
	ConvDir(reg);
	p = f.tellg();
	f.seekg(-sizeof(reg),ios::cur);
	f.write((char*)&reg,sizeof(reg));
	f.seekg(p);
   }
  }
  f.close();
  ShowMessage("Datos actualizados");
 }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit1Exit(TObject *Sender)
{ RegAlumno reg; bool hallado = false; Word codi;  long int p;
  AnsiString nomArch = ruta+nom;
  codi=StrToInt(Edit1->Text);
  fstream f(nomArch.c_str(),ios::binary|ios::in);
  if (!f.fail()) {
		while (!f.eof()&&!hallado)
		{
		 f.read((char*)&reg,sizeof(reg));  //Busqueda Secuencial
		 if (!f.eof()) {
		  hallado = (reg.cod == codi)&&(reg.marca!='*');
		 }
		}
	 p=BusBin(codi);
  }
	if (p >=0) { //Hallado
	 f.seekg(p); f.read((char*)&reg,sizeof(reg));
	 Edit2->Text = reg.nom;
	 Edit3->Text = reg.dir;
	 Edit4->Text = reg.fecha.dia;
	 Edit5->Text = reg.fecha.mes;
	 Edit6->Text = reg.fecha.año;
	 Edit7->Text= reg.telf;
	}
	else{
	 Button1Click(Sender);
	 Edit1->Text = codi;
    }
   f.close();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button7Click(TObject *Sender)
{ RegAlumno reg; RegAlumnoAnt rAnt;
  AnsiString nomArch = ruta+nom;
  AnsiString nuevo = ruta+"nuevo.dat";
  fstream fi(nomArch.c_str(),ios::binary|ios::in);
  fstream fo(nuevo.c_str(),ios::binary|ios::out);
  if (!fi.fail()) {
	while (!fi.eof()){
	  fi.read((char*)&rAnt,sizeof(rAnt));
	  if (!fi.eof()) {
	   reg.cod=rAnt.cod;
	   strcpy(reg.nom,rAnt.nom);
	   strcpy(reg.dir,rAnt.dir);
	   reg.fecha = rAnt.fecha;
	   reg.telf = 0;
	   reg.marca = ' ';
	   fo.write((char*)&reg,sizeof(reg));
	  }
	}
	fi.close(); fo.close();
	remove(nomArch.c_str());
	rename(nuevo.c_str(),nomArch.c_str());
	ShowMessage("Estructura cambiada no vuelva a apretar el boton");
  }

}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button8Click(TObject *Sender)
{ AnsiString nomArch = ruta+nom;
  RegAlumno reg; bool hallado; Word codi;
  fstream f(nomArch.c_str(),ios::binary|ios::in|ios::out);
  if (!f.fail()) {
   hallado = false; codi = StrToInt(Edit1->Text);
   while (!f.eof()&&!hallado){
	f.read((char*)&reg,sizeof(reg));
	if (!f.eof()) {
	 hallado = (reg.cod==codi)&&(reg.marca!='*');
	}
   }
   if (hallado) {
	reg.marca = '*';
	f.seekg(-sizeof(reg),ios::cur);
	f.write((char*)&reg,sizeof(reg));
   }
   f.close();
   Button1Click(Sender);
   ShowMessage("Dato Eliminado");
  }

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button9Click(TObject *Sender)
{  AnsiString nomArch = ruta+nom;
   RegAlumno reg; RegIdxCod rIdx;
   fstream fd(nomArch.c_str(),ios::binary|ios::in);
   fstream fi(nomIdxcod.c_str(),ios::binary|ios::out);
   if (!fd.fail()) {
	while (!fd.eof()){
	 rIdx.pos = fd.tellg();
	 fd.read((char*)&reg,sizeof(reg)); //Al leer mueve el puntero a la next pos
	 if (!fd.eof()) {
	  rIdx.cod = reg.cod;
	  fi.write((char*)&rIdx,sizeof(rIdx));
	 }
	}
	fd.close(); fi.close();
    ShowMessage("Indice Creado");
   }

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button10Click(TObject *Sender)
{  AnsiString nomArch = ruta+nom;
   RegAlumno reg; RegIdxNom rIdxN;
   fstream fd(nomArch.c_str(),ios::binary|ios::in);
   fstream fi(nomIdxNom.c_str(),ios::binary|ios::out);
   if (!fd.fail()) {
	 while (!fd.eof()){
	 rIdxN.pos = fd.tellg();
	 fd.read((char*)&reg,sizeof(reg));
	   if (!fd.eof()) {
	  strcpy(rIdxN.nom,reg.nom);
	  fi.write((char*)&rIdxN,sizeof(rIdxN));
	  }
	}
	fd.close(); fi.close();
	ShowMessage("Indice Creado");
   }

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button11Click(TObject *Sender)
{ RegIdxCod r1,r2; long i,j,n;
  fstream fi(nomIdxcod.c_str(),ios::binary|ios::in|ios::out|ios::ate); //ate = pone puntero al final
  if (!fi.fail()) {
   n=fi.tellg(); n=n-sizeof(r1);
   while (n>0){ //verificar que hayan registros por ordenar
	j=i=0; fi.seekg(i);  fi.read((char*)&r1,sizeof(r1));
	i=i+sizeof(r1);
	while (i<=n){ //Buscamos el mayor desde el 2do registro hasta el ultimo
	 fi.seekg(i); fi.read((char*)&r2,sizeof(r2));
	 if (r2.cod>r1.cod) {
	  r1=r2; j=i;
	 }
	 i=i+sizeof(r2);
	}
	if (j!=n) {
	 fi.seekg(j); fi.write((char*)&r2,sizeof(r2));
	 fi.seekg(n); fi.write((char*)&r1,sizeof(r1));
	}
	n=n-sizeof(r1);
   }
   fi.close();
   ShowMessage("IdxCod Ordenado");
  }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button12Click(TObject *Sender)
{ AnsiString nomArch = ruta+nom;
  AnsiString lis = ruta+"listadoIdxCod.txt";
  RegAlumno reg; AnsiString linea; Word i,n; RegIdxCod rIdx;
  fstream f1(nomArch.c_str(),ios::binary|ios::in); //Arch. Datos
  fstream f2(lis.c_str(),ios::out); //Arch.Listado
  fstream f3(nomIdxcod.c_str(),ios::binary|ios::in); //Arch. Indice
  if (!f3.fail()) {
   linea = "LISTADO DE ALUMNOS POR CODIGO";
   n = linea.Length();
   for (i = 1; i <= n; i++) {
	f2.put(linea[i]);
   }
   f2.put(10);
   while (!f3.eof()){
	f3.read((char*)&rIdx,sizeof(rIdx));
	if (!f3.eof()) {
	 f1.seekg(rIdx.pos); f1.read((char*)&reg,sizeof(reg));
	 linea = reg.cod;
	 linea = linea +","+reg.nom+","+reg.dir+","+reg.fecha.dia+"/"+reg.fecha.mes+"/"+reg.fecha.año+","+reg.telf;
	 n = linea.Length();
	 for (i = 1; i <= n; i++) {
	  f2.put(linea[i]);
	 }
	 f2.put(10);
	}
   }
   f1.close(); f2.close(); f3.close();
   ShowMessage("Listado Generaado");
  }
}
//---------------------------------------------------------------------------
 long int TForm1::BusBin(Word codi){
  long int p,a,b,c; RegIdxCod rIdx; bool hallado=false;
  fstream fi(nomIdxcod.c_str(),ios::binary|ios::in|ios::ate);
  if (!fi.fail()) {
   a=0; b=fi.tellg(); b=b/sizeof(rIdx)-1;
   while((a<=b)&&!hallado){
	c=(a+b)/2;
	fi.seekg(c*sizeof(rIdx)); fi.read((char*)&rIdx,sizeof(rIdx));
	if (codi==rIdx.cod) {
	 hallado = true; p=rIdx.pos;
	}else {
	 if (codi>rIdx.cod) {
	  a=c+1;
	 }else {
	  b=c-1;
	 }
    }
   }
   fi.close();
  }
  return p;
 }
void __fastcall TForm1::Button13Click(TObject *Sender)
{ RegAlumno reg; RegIdxCod ridx; Cardinal p;
  AnsiString nomArch = ruta + nom;
  AnsiString linea = ruta + "ListadoIdxCodMayorAmenor.txt";
  fstream fd(nomArch.c_str(),ios::binary|ios::in);
  fstream fi(nomIdxcod.c_str(),ios::binary|ios::in|ios::ate);
  fstream ft(linea.c_str(),ios::out);
  if (!fi.fail()) { //Acceso muy rara vez usamos la condicion !fi.eof()
   p=fi.tellg();
   while(p>0) {

	 p=p-sizeof(ridx);
	 fi.seekg(p); fi.read((char*)&ridx,sizeof(ridx));
	 fd.seekg(ridx.pos); fd.read((char*)&reg,sizeof(reg));
	 linea=IntToStr(reg.cod)+","+reg.nom+","+reg.dir;
	 for (Word i = 1; i <= linea.Length() ; i++) {
	  ft.put(linea[i]);
	 }
	 ft.put(10);
   }
   fi.close(); fd.close(); ft.close();
   ShowMessage("Listado Generado MAyMen");
  }
}
//---------------------------------------------------------------------------
 bool Mayor21(RegAlumno reg){
  bool p;  p=false;
  byte edad;
  edad = 2025 - reg.fecha.año;
  if (edad >= 21) {
   if (reg.fecha.mes < 11) {
	p = true;
   }
   else {
	if (reg.fecha.dia < 27) {
	 p = true;
	}
   }
  }

 return p;
 };
void __fastcall TForm1::Button14Click(TObject *Sender)
{ RegAlumno reg;    AnsiString linea;
  AnsiString nomArch = ruta + nom;
  AnsiString lis = ruta + "ListadoIdxMayores21.txt";
  fstream fd(nomArch.c_str(),ios::binary|ios::in);
  fstream ft(lis.c_str(),ios::out);
  if (!fd.fail()) {
	while (!fd.eof()){
	 fd.read((char*)&reg,sizeof(reg));
	 if (!fd.eof()) {
	  if (Mayor21(reg)) {
	   ConvMayus(reg);
	   linea = IntToStr(reg.cod)+","+reg.nom+","+reg.dir+","+reg.fecha.dia+"/"+reg.fecha.mes+"/"+reg.fecha.año+","+reg.telf;
		for (Word i = 1; i <= linea.Length() ; i++) {
	   ft.put(linea[i]);
	   }
	   ft.put(10);
	  }
	 }
   }
   	fd.close(); ft.close();
	ShowMessage("Listado Generado");
 }
}

//---------------------------------------------------------------------------



void __fastcall TForm1::Generarlistadoinversodeordenalingresado1Click(TObject *Sender)
{
  AnsiString nomArch = ruta+nom;
  AnsiString lis = ruta+"listado.txt";
  RegAlumno reg; AnsiString linea; int i,j,n;
  fstream f1(nomArch.c_str(),ios::binary|ios::in); //Abrir el archivo en binario y de lectura
  fstream f2(lis.c_str(),ios::out); //Abre el archivo en modo Escritura, crea en cada ejecucion , borrando el que ya existia
  if (!f1.fail()) {
   linea = "                    LISTADO DE ALUMNOS";
   n = linea.Length();
   for (i = 1; i <= n; i++) {
	f2.put(linea[i]);
   }
   f2.put(10);
   f1.seekg(0,ios::end);
   int totalreg=(f1.tellg())/(sizeof(RegAlumno));
   for (i=totalreg-1; i>=0; --i){
	f1.seekg(i*sizeof(RegAlumno),ios::beg);
	f1.read((char*)&reg,sizeof(RegAlumno));
	if (reg.marca!='*') {
	 linea=IntToStr((int)reg.cod)+","+reg.nom+","+reg.dir+","+IntToStr((int)reg.fecha.dia)+"/"+IntToStr((int)reg.fecha.mes)+"/"+IntToStr((int)reg.fecha.año)+","+IntToStr((int)reg.telf);
	 n=linea.Length();
	 for (j=1; j<=n; j++) {
	  f2.put(linea[j]);
	 }
	 f2.put(10);
	}
   }
   f1.close(); f2.close();
   ShowMessage("Listado Generado Papi");
  }
}
//---------------------------------------------------------------------------
int DevolverCant(AnsiString rutalocal)
{ int palabrasxlin,cantfinal,longitudlinea; char caracter;
  fstream f1(rutalocal.c_str(),ios::binary|ios::in);
  cantfinal=0; bool ban=false;
  if (!f1.fail()) {
   palabrasxlin=0;
   while (f1.read((char*)&caracter,1)) {
	if (isalnum(caracter))
	 ban=true;
	if (caracter==32&&ban){
	 palabrasxlin++; ban=false;
	}
	if (caracter==10){
	 if (palabrasxlin<=2)
	  cantfinal++;
	 palabrasxlin=0; ban=false;
	}
   }
   f1.close();
  }
  if (palabrasxlin<=2)
   cantfinal++;

  return cantfinal;
}
//10 enter y 13 antes ; 32 Espacio
void __fastcall TForm1::Devolverlacantidaddelineasquetienenmenosde3palabras1Click(TObject *Sender)
{
 if (OpenTextFileDialog1->Execute()) {
  AnsiString rutalocal=OpenTextFileDialog1->FileName;
  ShowMessage(IntToStr(DevolverCant(rutalocal)));
 }
}

void DeleteSpace(AnsiString NomArch){
 AnsiString linea; char lin[500]; Word i,n;
 fstream pf1(NomArch.c_str());
 ofstream pf2("temporal.tmp");
 if (!pf1.fail()) {
  while (!pf1.eof()){
   pf1.getline(lin,500);
   linea = lin; linea=linea.TrimLeft(); strcpy(lin,linea.c_str());
   n=strlen(lin);
   for (i = 0; i < n; i++) {
	pf2.put(lin[i]);
   }

   if (!pf1.eof()) {
	pf2.put(10);
   }
  }
  pf1.close(); pf2.close();
  remove(NomArch.c_str());
  rename("temporal.tmp",NomArch.c_str());
 }
}

//---------------------------------------------------------------------------


void __fastcall TForm1::Eliminarlineasquetienenalmenosunnmeroconmenosde4digitos1Click(TObject *Sender)
{AnsiString rutalocal;
 if (OpenTextFileDialog1->Execute())
	rutalocal = OpenTextFileDialog1->FileName;
 ofstream pf2("temporal.tmp");
 fstream pf1(rutalocal.c_str(), ios::in | ios::binary);

 if (!pf1.fail()) {
	AnsiString linea="";
	char caracter;
	int contDigitos=0;
	bool borrarLinea=false;
	bool estoyEnNumero = false;

	while (pf1.read((char*)&caracter, 1)) {
		if (caracter == 10) {
			if (estoyEnNumero && contDigitos < 4 && contDigitos > 0) {
			 borrarLinea = true;
			}
			if (!borrarLinea) {
			 pf2 << linea.c_str() << std::endl;
			}
			 linea = "";
			 borrarLinea = false;
			 estoyEnNumero = false;
			 contDigitos = 0;
		}
		else if (caracter != 13) {
		 linea += caracter;
			 if (isdigit(caracter)) {
			  estoyEnNumero = true;
			  contDigitos++;
			 }
			 else {
				if (estoyEnNumero) {
				 if (contDigitos < 4) {
				  borrarLinea = true;
				 }
				 estoyEnNumero = false;
				 contDigitos = 0;
				}
			 }
		}
	}
	 if (linea != "") {
		if (estoyEnNumero && contDigitos<4 && contDigitos>0) borrarLinea = true;
		if (!borrarLinea) pf2 << linea.c_str();
	 }
	  pf1.close();
	  pf2.close();
	  remove(rutalocal.c_str());
	  rename("temporal.tmp", rutalocal.c_str());
	  ShowMessage("Proceso terminado correctamente");
 }
}
//---------------------------------------------------------------------------
bool TerminaEn20(Cardinal telefono)
{

}

void __fastcall TForm1::EliminarRegistrosdenmeroqueterminenen201Click(TObject *Sender)
{
 fstream f1(rutafinal.c_str(),ios::in | ios::out | ios::binary);    //Revisar bucle de lectura y escritura
 if (!f1.fail()) {
  RegAlumno registrotemporal;
	while (!f1.eof()) {
	 f1.read((char*)&registrotemporal,sizeof(registrotemporal));
	 if ( ( registrotemporal.telf%100==20)&&registrotemporal.marca!='*' ) {
      registrotemporal.marca='*';
	  f1.seekp(-sizeof(registrotemporal),ios::cur);
	  f1.write((char*)&registrotemporal,sizeof(RegAlumno));
	  f1.seekp(0,ios::cur);

	 }
     ShowMessage(registrotemporal.nom);
	}
/*	if ( ( registrotemporal.telf%100==20)&&registrotemporal.marca!='*' ) {
	 registrotemporal.marca='*';
	 f1.seekg(-sizeof(registrotemporal),ios::cur);
	 f1.write((char*)&registrotemporal,sizeof(RegAlumno));
	}  */
  f1.close();
  ShowMessage("Registros Eliminados");
 }


}
//---------------------------------------------------------------------------


void __fastcall TForm1::EliminarMarcadetodoslosregistros1Click(TObject *Sender)
{ fstream f1(rutafinal.c_str(), ios::in | ios::out | ios::binary);
 RegAlumno alumnotemp;
 while (f1.read((char*)&alumnotemp,sizeof(RegAlumno))) {
  alumnotemp.marca=' ';
  f1.seekg(-sizeof(alumnotemp),ios::cur);
  f1.write((char*)&alumnotemp,sizeof(RegAlumno));
  f1.seekg(0,ios::cur);
 }
/*  alumnotemp.marca=' ';
  f1.seekg(-sizeof(alumnotemp),ios::cur);
  f1.write((char*)&alumnotemp,sizeof(RegAlumno));   */
 f1.close();
 ShowMessage("Registros Restaurados");
}
//---------------------------------------------------------------------------

