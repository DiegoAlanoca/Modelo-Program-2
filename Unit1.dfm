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
    Left = 78
    Top = 72
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
    Left = 75
    Top = 128
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
    Left = 50
    Top = 184
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
    Left = 104
    Top = 235
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
    Left = 73
    Top = 293
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
  object Edit1: TEdit
    Left = 208
    Top = 75
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
    Left = 208
    Top = 131
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
    Left = 208
    Top = 187
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
    Left = 208
    Top = 238
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
    Left = 263
    Top = 238
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
    Left = 311
    Top = 238
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
    Left = 32
    Top = 382
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
    Left = 145
    Top = 382
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
    Left = 398
    Top = 383
    Width = 113
    Height = 42
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
    Left = 545
    Top = 385
    Width = 97
    Height = 39
    Caption = 'NomMay'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 10
    OnClick = Button5Click
  end
  object Button6: TButton
    Left = 688
    Top = 382
    Width = 153
    Height = 41
    Caption = 'DirMay'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
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
    Left = 208
    Top = 296
    Width = 249
    Height = 33
    TabOrder = 13
    Text = 'Edit7'
  end
  object Button8: TButton
    Left = 279
    Top = 384
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
    Left = 32
    Top = 429
    Width = 97
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
    Left = 398
    Top = 431
    Width = 113
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
    Left = 145
    Top = 429
    Width = 104
    Height = 41
    Caption = 'OrdIdxCod'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 17
    OnClick = Button11Click
  end
  object Button12: TButton
    Left = 279
    Top = 431
    Width = 97
    Height = 39
    Caption = 'ListIdxCod'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 18
    OnClick = Button12Click
  end
  object Button13: TButton
    Left = 529
    Top = 430
    Width = 145
    Height = 37
    Caption = 'ListCodeAtras'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 19
    OnClick = Button13Click
  end
  object Button14: TButton
    Left = 688
    Top = 429
    Width = 153
    Height = 37
    Caption = 'ListMayor21'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 20
    OnClick = Button14Click
  end
  object BitBtn1: TBitBtn
    Left = 701
    Top = 512
    Width = 140
    Height = 33
    Kind = bkClose
    NumGlyphs = 2
    TabOrder = 21
  end
  object MainMenu1: TMainMenu
    Left = 592
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
    end
  end
  object OpenTextFileDialog1: TOpenTextFileDialog
    Left = 800
    Top = 192
  end
end
