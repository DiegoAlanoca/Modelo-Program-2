//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.ExtDlgs.hpp>
#include <fstream>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TEdit *Edit1;
	TEdit *Edit2;
	TEdit *Edit3;
	TEdit *Edit4;
	TEdit *Edit5;
	TEdit *Edit6;
	TButton *Button1;
	TButton *Button2;
	TButton *Button3;
	TButton *Button4;
	TButton *Button5;
	TButton *Button6;
	TButton *Button7;
	TLabel *Label5;
	TEdit *Edit7;
	TLabel *Label6;
	TButton *Button8;
	TButton *Button9;
	TButton *Button10;
	TButton *Button11;
	TButton *Button12;
	TButton *Button13;
	TButton *Button14;
	TMainMenu *MainMenu1;
	TMenuItem *PracticasExamen1;
	TMenuItem *Generarlistadoinversodeordenalingresado1;
	TBitBtn *BitBtn1;
	TMenuItem *Devolverlacantidaddelineasquetienenmenosde3palabras1;
	TOpenTextFileDialog *OpenTextFileDialog1;
	TMenuItem *Eliminarlineasquetienenalmenosunnmeroconmenosde4digitos1;
	TMenuItem *EliminarRegistrosdenmeroqueterminenen201;
	TMenuItem *EliminarMarcadetodoslosregistros1;
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall Button5Click(TObject *Sender);
	void __fastcall Button6Click(TObject *Sender);
	void __fastcall Edit1Exit(TObject *Sender);
	void __fastcall Button7Click(TObject *Sender);
	void __fastcall Button8Click(TObject *Sender);
	void __fastcall Button9Click(TObject *Sender);
	void __fastcall Button10Click(TObject *Sender);
	void __fastcall Button11Click(TObject *Sender);
	void __fastcall Button12Click(TObject *Sender);
	void __fastcall Button13Click(TObject *Sender);
	void __fastcall Button14Click(TObject *Sender);
	void __fastcall Generarlistadoinversodeordenalingresado1Click(TObject *Sender);
	void __fastcall Devolverlacantidaddelineasquetienenmenosde3palabras1Click(TObject *Sender);
	void __fastcall Eliminarlineasquetienenalmenosunnmeroconmenosde4digitos1Click(TObject *Sender);
	void __fastcall EliminarRegistrosdenmeroqueterminenen201Click(TObject *Sender);
	void __fastcall EliminarMarcadetodoslosregistros1Click(TObject *Sender);






private:	// User declarations
 AnsiString nom; //Nombre del archivo
 AnsiString ruta; //Ruta del archivo
 AnsiString rutafinal; //Ruta completa para no repetir
 AnsiString nomIdxcod; //Nombre del archivo indice por codigo
 AnsiString nomIdxNom; //Nombre del archivo indice por nombre
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
	long int TForm1::BusBin(Word codi);
};
struct Tfecha {
 byte dia;
 byte mes;
 Word año;
 //4 bytes
};

struct RegAlumnoAnt{
 Word cod;    //2 bytes
 char nom[21];//21 bytes
 char dir[21];//21 bytes
 Tfecha fecha;// 4 bytes
 // 48 bytes
};

struct RegAlumno{
 char marca;  // 1 byte
 Word cod;    //2 bytes
 char nom[31];//31 bytes
 char dir[31];//31 bytes
 Tfecha fecha; //4 bytes
 Cardinal telf; //6 bytes
 // 75 bytes
};

struct RegIdxCod{ //Indices por codigo
 Word cod; //Campo de busqueda
 Cardinal pos; //Posicion en el archivo de datos
};

struct RegIdxNom{
 char nom[31];//Campo busqueda
 Cardinal pos;
};

//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
