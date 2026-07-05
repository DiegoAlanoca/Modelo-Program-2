object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 572
  ClientWidth = 889
  Color = clBtnFace
  CustomTitleBar.CaptionAlignment = taCenter
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -19
  Font.Name = 'Segoe UI'
  Font.Style = []
  Menu = MainMenu1
  OnCreate = FormCreate
  TextHeight = 25
  object Label1: TLabel
    Left = 54
    Top = 40
    Width = 108
    Height = 32
    Caption = 'CODIGO :'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -24
    Font.Name = 'Segoe UI'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label2: TLabel
    Left = 51
    Top = 96
    Width = 111
    Height = 32
    Caption = 'NOMBRE:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -24
    Font.Name = 'Segoe UI'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label3: TLabel
    Left = 26
    Top = 152
    Width = 136
    Height = 32
    Caption = 'DIRECCION:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -24
    Font.Name = 'Segoe UI'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label4: TLabel
    Left = 80
    Top = 203
    Width = 82
    Height = 32
    Caption = 'FECHA:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -24
    Font.Name = 'Segoe UI'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label5: TLabel
    Left = 724
    Top = 118
    Width = 111
    Height = 25
    Caption = 'Just one click'
  end
  object Label6: TLabel
    Left = 49
    Top = 261
    Width = 113
    Height = 32
    Caption = 'NUMERO:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -24
    Font.Name = 'Segoe UI'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label7: TLabel
    Left = 25
    Top = 397
    Width = 152
    Height = 25
    Caption = 'Obligatorio indice'
  end
  object Label8: TLabel
    Left = 206
    Top = 518
    Width = 10
    Height = 15
    Caption = '1)'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
  end
  object Label9: TLabel
    Left = 583
    Top = 470
    Width = 10
    Height = 15
    Caption = '2)'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
  end
  object Edit1: TEdit
    Left = 184
    Top = 43
    Width = 265
    Height = 33
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = '@Malgun Gothic Semilight'
    Font.Style = [fsItalic]
    ParentFont = False
    TabOrder = 0
    Text = '0'
    OnExit = Edit1Exit
  end
  object Edit2: TEdit
    Left = 184
    Top = 99
    Width = 265
    Height = 33
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = '@Malgun Gothic Semilight'
    Font.Style = [fsItalic]
    ParentFont = False
    TabOrder = 1
    Text = 'Edit2'
  end
  object Edit3: TEdit
    Left = 184
    Top = 155
    Width = 249
    Height = 33
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = '@Malgun Gothic Semilight'
    Font.Style = [fsItalic]
    ParentFont = False
    TabOrder = 2
    Text = 'Edit3'
  end
  object Edit4: TEdit
    Left = 184
    Top = 206
    Width = 49
    Height = 33
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = '@Malgun Gothic Semilight'
    Font.Style = [fsItalic]
    ParentFont = False
    TabOrder = 3
    Text = 'Edit4'
  end
  object Edit5: TEdit
    Left = 239
    Top = 206
    Width = 42
    Height = 33
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = '@Malgun Gothic Semilight'
    Font.Style = [fsItalic]
    ParentFont = False
    TabOrder = 4
    Text = 'Edit5'
  end
  object Edit6: TEdit
    Left = 287
    Top = 206
    Width = 58
    Height = 33
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = '@Malgun Gothic Semilight'
    Font.Style = [fsItalic]
    ParentFont = False
    TabOrder = 5
    Text = 'Edit6'
  end
  object Button1: TButton
    Left = 25
    Top = 350
    Width = 94
    Height = 41
    Caption = 'Limpiar'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 6
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 138
    Top = 350
    Width = 104
    Height = 41
    Caption = 'Guardar'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 7
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 722
    Top = 16
    Width = 106
    Height = 41
    Caption = 'Pruebas'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -24
    Font.Name = 'Segoe UI'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 8
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 385
    Top = 350
    Width = 113
    Height = 41
    Caption = 'LISTADO'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 9
    OnClick = Button4Click
  end
  object Button5: TButton
    Left = 744
    Top = 350
    Width = 137
    Height = 39
    Caption = 'Nombres a Mayusculas'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 10
    OnClick = Button5Click
  end
  object Button6: TButton
    Left = 744
    Top = 448
    Width = 137
    Height = 41
    Caption = 'Conv. Direccion Mayus'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 11
    OnClick = Button6Click
  end
  object Button7: TButton
    Left = 722
    Top = 71
    Width = 113
    Height = 41
    Caption = 'CambStruc'
    TabOrder = 12
    OnClick = Button7Click
  end
  object Edit7: TEdit
    Left = 184
    Top = 264
    Width = 249
    Height = 33
    TabOrder = 13
    Text = 'Edit7'
  end
  object Button8: TButton
    Left = 264
    Top = 350
    Width = 97
    Height = 41
    Caption = 'Eliminado'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 14
    OnClick = Button8Click
  end
  object Button9: TButton
    Left = 25
    Top = 428
    Width = 160
    Height = 41
    Caption = 'IdxCod'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 15
    OnClick = Button9Click
  end
  object Button10: TButton
    Left = 432
    Top = 425
    Width = 145
    Height = 39
    Caption = 'IdxName'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 16
    OnClick = Button10Click
  end
  object Button11: TButton
    Left = 25
    Top = 475
    Width = 160
    Height = 41
    Caption = 'OrdIdxCod Menor a Mayor'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 17
    OnClick = Button11Click
  end
  object Button12: TButton
    Left = 206
    Top = 473
    Width = 172
    Height = 39
    Caption = 'ListIdxCod Listado Visible'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 18
    OnClick = Button12Click
  end
  object Button13: TButton
    Left = 207
    Top = 430
    Width = 171
    Height = 37
    Caption = 'ListCodeAtras Mayor a Menor'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 19
    OnClick = Button13Click
  end
  object Button14: TButton
    Left = 744
    Top = 405
    Width = 137
    Height = 37
    Caption = 'Generar List. Mayor a 21'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 20
    OnClick = Button14Click
  end
  object BitBtn1: TBitBtn
    Left = 746
    Top = 512
    Width = 140
    Height = 33
    Kind = bkClose
    NumGlyphs = 2
    TabOrder = 21
  end
  object Button15: TButton
    Left = 512
    Top = 300
    Width = 369
    Height = 25
    Caption = 'Empieza en Consonante y termina en Vocal'
    TabOrder = 22
    OnClick = Button15Click
  end
  object Edit8: TEdit
    Left = 603
    Top = 155
    Width = 232
    Height = 33
    TabOrder = 23
    Text = 'Edit8 Pruebas'
  end
  object Button16: TButton
    Left = 432
    Top = 470
    Width = 145
    Height = 39
    Caption = 'Ordenar Indice x Nombre'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 24
    OnClick = Button16Click
  end
  object Button17: TButton
    Left = 583
    Top = 425
    Width = 145
    Height = 39
    Caption = 'Listado Nombre Visible'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 25
    OnClick = Button16Click
  end
  object MainMenu1: TMainMenu
    Left = 528
    Top = 8
    object PracticasExamen1: TMenuItem
      Caption = 'Practicas Examen'
      object Generarlistadoinversodeordenalingresado1: TMenuItem
        Caption = 'Generar listado inverso de orden al ingresado'
        OnClick = Generarlistadoinversodeordenalingresado1Click
      end
      object Devolverlacantidaddelineasquetienenmenosde3palabras1: TMenuItem
        Caption = 'Devolver la cantidad de lineas que tienen menos de 3 palabras'
        OnClick = Devolverlacantidaddelineasquetienenmenosde3palabras1Click
      end
      object Eliminarlineasquetienenalmenosunnmeroconmenosde4digitos1: TMenuItem
        Caption = 
          'Eliminar lineas que tienen almenos un n'#250'mero con menos de 4 digi' +
          'tos'
        OnClick = Eliminarlineasquetienenalmenosunnmeroconmenosde4digitos1Click
      end
      object EliminarRegistrosdenmeroqueterminenen201: TMenuItem
        Caption = 'Eliminar Registros de n'#250'mero que terminen en 20'
        OnClick = EliminarRegistrosdenmeroqueterminenen201Click
      end
      object EliminarMarcadetodoslosregistros1: TMenuItem
        Caption = 'Eliminar Marca de todos los registros'
        OnClick = EliminarMarcadetodoslosregistros1Click
      end
      object Modificarlosregistrosaumentando1diaenfechadenacimiento1: TMenuItem
        Caption = 'Modificar los registros aumentando 1 dia en fecha de nacimiento'
        OnClick = Modificarlosregistrosaumentando1diaenfechadenacimiento1Click
      end
      object Hacerlistadoderegistroscodigoqueterminanen01: TMenuItem
        Caption = 'Hacer listado de registros codigo que terminan en 0'
        OnClick = Hacerlistadoderegistroscodigoqueterminanen01Click
      end
      object Examen11: TMenuItem
        Caption = 'Examen 1'
        OnClick = Examen11Click
      end
      object Examen31: TMenuItem
        Caption = 'Examen 3'
        OnClick = Examen31Click
      end
    end
    object area1: TMenuItem
      Caption = 'Tarea'
      object N3Busquedabinaria1: TMenuItem
        Caption = '3) Busqueda binaria x Codigo'
        OnClick = N3Busquedabinaria1Click
      end
    end
    object Examenfinal1: TMenuItem
      Caption = 'Examen final'
      object N2do1: TMenuItem
        Caption = '2do'
        OnClick = N2do1Click
      end
    end
  end
  object OpenTextFileDialog1: TOpenTextFileDialog
    Left = 528
    Top = 72
  end
end
