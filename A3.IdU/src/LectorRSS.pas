unit LectorRSS;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants, System.Classes, Vcl.Graphics,
  Vcl.Controls, Vcl.Forms, Vcl.Dialogs, Vcl.ExtCtrls, Vcl.StdCtrls, Vcl.Buttons,
  Vcl.Imaging.pngimage, IdBaseComponent, IdComponent, IdTCPConnection,
  IdTCPClient, IdHTTP, StrUtils;

type
  TForm1 = class(TForm)
    Panel1: TPanel;
    Panel2: TPanel;
    Panel3: TPanel;
    Panel4: TPanel;
    Panel5: TPanel;
    Label1: TLabel;
    BitBtn1: TBitBtn;
    BitBtn2: TBitBtn;
    BitBtn3: TBitBtn;
    BitBtn4: TBitBtn;
    BitBtn5: TBitBtn;
    BitBtn6: TBitBtn;
    Image1: TImage;
    IdHTTP1: TIdHTTP;
    SaveDialog1: TSaveDialog;
    procedure BitBtn1Click(Sender: TObject);
    procedure BitBtn2Click(Sender: TObject);
    procedure BitBtn3Click(Sender: TObject);
    procedure BitBtn4Click(Sender: TObject);
    procedure BitBtn5Click(Sender: TObject);
    procedure BitBtn6Click(Sender: TObject);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  Form1: TForm1;

implementation

{$R *.dfm}

procedure TForm1.BitBtn1Click(Sender: TObject);
var
  salvar : tsavedialog;
  wea,noticia:TStrings;
  inicioT, finT,inicioD, finD:Integer;
  aux,tmp:string;
begin
      wea:=TStringList.Create();
      noticia:=TStringList.Create;
      wea.Text:= idhttp1.Get('http://estaticos.elmundo.es/elmundo/rss/espana.xml');
      tmp:=wea.Text;
      inicioT:=1;
    try
        while inicioT <>0 do
        begin
          inicioT:=PosEx('<item><title><![CDATA[',wea.text,1);
          finT:= posEx(']]></title>',wea.text,inicioT);
          aux:= copy(wea.text,inicioT+22,(finT-InicioT));
          delete(tmp,inicioT,finT-InicioT);
          noticia.Add(aux);
          aux:='/n';
          inicioD:=PosEx('<description><![CDATA[',wea.Text,InicioT);
          finD:=PosEx('.&nbsp;<a href="',wea.Text,inicioD);
          aux:= copy(wea.text,inicioD+22,(finD-InicioD));
          delete(tmp,inicioD,finD-InicioD);
          noticia.Add(aux);
          wea.Text:=tmp;

        end;
        salvar := TSaveDialog.Create(self);
        salvar.Title := 'Guarda tu noticia';
        salvar.InitialDir := GetCurrentDir;
        salvar.Filter := 'Text file|*.txt|Word file|*.doc';
        salvar.DefaultExt := 'txt';
        salvar.FilterIndex := 1;
        if salvar.Execute
        then begin
          noticia.SaveToFile(salvar.FileName);
          ShowMessage('Archivo se guardo correctamente.');
        end
        else ShowMessage('No se guardo la noticia.');


    finally
         wea.Free;
         noticia.free;
         salvar.Free;
    end;
end;

procedure TForm1.BitBtn2Click(Sender: TObject);
var
  salvar : tsavedialog;
  wea,noticia:TStrings;
  inicioT, finT,inicioD, finD:Integer;
  aux,tmp:string;
begin
      wea:=TStringList.Create();
      noticia:=TStringList.Create;
      wea.Text:= idhttp1.Get('http://estaticos.elmundo.es/elmundo/rss/internacional.xml');
      tmp:=wea.Text;
      inicioT:=1;
    try
        while inicioT <>0 do
        begin
          inicioT:=PosEx('<item><title><![CDATA[',wea.text,1);
          finT:= posEx(']]></title>',wea.text,inicioT);
          aux:= copy(wea.text,inicioT+22,(finT-InicioT));
          delete(tmp,inicioT,finT-InicioT);
          noticia.Add(aux);
          aux:='/n';
          inicioD:=PosEx('<description><![CDATA[',wea.Text,InicioT);
          finD:=PosEx('.&nbsp;<a href="',wea.Text,inicioD);
          aux:= copy(wea.text,inicioD+22,(finD-InicioD));
          delete(tmp,inicioD,finD-InicioD);
          noticia.Add(aux);
          wea.Text:=tmp;

        end;
        salvar := TSaveDialog.Create(self);
        salvar.Title := 'Guarda tu noticia';
        salvar.InitialDir := GetCurrentDir;
        salvar.Filter := 'Text file|*.txt|Word file|*.doc';
        salvar.DefaultExt := 'txt';
        salvar.FilterIndex := 1;
        if salvar.Execute
        then begin
          noticia.SaveToFile(salvar.FileName);
          ShowMessage('Archivo se guardo correctamente.');
        end
        else ShowMessage('No se guardo la noticia.');


    finally
         wea.Free;
         noticia.free;
         salvar.Free;
    end;
end;

procedure TForm1.BitBtn3Click(Sender: TObject);
var
  salvar : tsavedialog;
  wea,noticia:TStrings;
  inicioT, finT,inicioD, finD:Integer;
  aux,tmp:string;
begin
      wea:=TStringList.Create();
      noticia:=TStringList.Create;
      wea.Text:= idhttp1.Get('http://estaticos.elmundo.es/elmundo/rss/economia.xml');
      tmp:=wea.Text;
      inicioT:=1;
    try
        while inicioT <>0 do
        begin
          inicioT:=PosEx('<item><title><![CDATA[',wea.text,1);
          finT:= posEx(']]></title>',wea.text,inicioT);
          aux:= copy(wea.text,inicioT+22,(finT-InicioT));
          delete(tmp,inicioT,finT-InicioT);
          noticia.Add(aux);
          aux:='/n';
          inicioD:=PosEx('<description><![CDATA[',wea.Text,InicioT);
          finD:=PosEx('.&nbsp;<a href="',wea.Text,inicioD);
          aux:= copy(wea.text,inicioD+22,(finD-InicioD));
          delete(tmp,inicioD,finD-InicioD);
          noticia.Add(aux);
          wea.Text:=tmp;

        end;
        salvar := TSaveDialog.Create(self);
        salvar.Title := 'Guarda tu noticia';
        salvar.InitialDir := GetCurrentDir;
        salvar.Filter := 'Text file|*.txt|Word file|*.doc';
        salvar.DefaultExt := 'txt';
        salvar.FilterIndex := 1;
        if salvar.Execute
        then begin
          noticia.SaveToFile(salvar.FileName);
          ShowMessage('Archivo se guardo correctamente.');
        end
        else ShowMessage('No se guardo la noticia.');


    finally
         wea.Free;
         noticia.free;
         salvar.Free;
    end;
end;

procedure TForm1.BitBtn4Click(Sender: TObject);
var
  salvar : tsavedialog;
  wea,noticia:TStrings;
  inicioT, finT,inicioD, finD:Integer;
  aux,tmp:string;
begin
      wea:=TStringList.Create();
      noticia:=TStringList.Create;
      wea.Text:= idhttp1.Get('http://estaticos.elmundo.es/elmundo/rss/cultura.xml');
      tmp:=wea.Text;
      inicioT:=1;
    try
        while inicioT <>0 do
        begin
          inicioT:=PosEx('<item><title><![CDATA[',wea.text,1);
          finT:= posEx(']]></title>',wea.text,inicioT);
          aux:= copy(wea.text,inicioT+22,(finT-InicioT));
          delete(tmp,inicioT,finT-InicioT);
          noticia.Add(aux);
          aux:='/n';
          inicioD:=PosEx('<description><![CDATA[',wea.Text,InicioT);
          finD:=PosEx('.&nbsp;<a href="',wea.Text,inicioD);
          aux:= copy(wea.text,inicioD+22,(finD-InicioD));
          delete(tmp,inicioD,finD-InicioD);
          noticia.Add(aux);
          wea.Text:=tmp;

        end;
        salvar := TSaveDialog.Create(self);
        salvar.Title := 'Guarda tu noticia';
        salvar.InitialDir := GetCurrentDir;
        salvar.Filter := 'Text file|*.txt|Word file|*.doc';
        salvar.DefaultExt := 'txt';
        salvar.FilterIndex := 1;
        if salvar.Execute
        then begin
          noticia.SaveToFile(salvar.FileName);
          ShowMessage('Archivo se guardo correctamente.');
        end
        else ShowMessage('No se guardo la noticia.');


    finally
         wea.Free;
         noticia.free;
         salvar.Free;
    end;
end;

procedure TForm1.BitBtn5Click(Sender: TObject);
var
  salvar : tsavedialog;
  wea,noticia:TStrings;
  inicioT, finT,inicioD, finD:Integer;
  aux,tmp:string;
begin
      wea:=TStringList.Create();
      noticia:=TStringList.Create;
      wea.Text:= idhttp1.Get('http://estaticos.elmundo.es/elmundo/rss/ciencia.xml');
      tmp:=wea.Text;
      inicioT:=1;
    try
        while inicioT <>0 do
        begin
          inicioT:=PosEx('<item><title><![CDATA[',wea.text,1);
          finT:= posEx(']]></title>',wea.text,inicioT);
          aux:= copy(wea.text,inicioT+22,(finT-InicioT));
          delete(tmp,inicioT,finT-InicioT);
          noticia.Add(aux);
          aux:='/n';
          inicioD:=PosEx('<description><![CDATA[',wea.Text,InicioT);
          finD:=PosEx('.&nbsp;<a href="',wea.Text,inicioD);
          aux:= copy(wea.text,inicioD+22,(finD-InicioD));
          delete(tmp,inicioD,finD-InicioD);
          noticia.Add(aux);
          wea.Text:=tmp;

        end;
        salvar := TSaveDialog.Create(self);
        salvar.Title := 'Guarda tu noticia';
        salvar.InitialDir := GetCurrentDir;
        salvar.Filter := 'Text file|*.txt|Word file|*.doc';
        salvar.DefaultExt := 'txt';
        salvar.FilterIndex := 1;
        if salvar.Execute
        then begin
          noticia.SaveToFile(salvar.FileName);
          ShowMessage('Archivo se guardo correctamente.');
        end
        else ShowMessage('No se guardo la noticia.');


    finally
         wea.Free;
         noticia.free;
         salvar.Free;
    end;
end;

procedure TForm1.BitBtn6Click(Sender: TObject);
var
  salvar : tsavedialog;
  wea,noticia:TStrings;
  inicioT, finT,inicioD, finD:Integer;
  aux,tmp:string;
begin
      wea:=TStringList.Create();
      noticia:=TStringList.Create;
      wea.Text:= idhttp1.Get('http://estaticos.elmundo.es/elmundodeporte/rss/portada.xml');
      tmp:=wea.Text;
      inicioT:=1;
    try
        while inicioT <>0 do
        begin
          inicioT:=PosEx('<item><title><![CDATA[',wea.text,1);
          finT:= posEx(']]></title>',wea.text,inicioT);
          aux:= copy(wea.text,inicioT+22,(finT-InicioT));
          delete(tmp,inicioT,finT-InicioT);
          noticia.Add(aux);
          aux:='/n';
          inicioD:=PosEx('<description><![CDATA[',wea.Text,InicioT);
          finD:=PosEx('.&nbsp;<a href="',wea.Text,inicioD);
          aux:= copy(wea.text,inicioD+22,(finD-InicioD));
          delete(tmp,inicioD,finD-InicioD);
          noticia.Add(aux);
          wea.Text:=tmp;

        end;
        salvar := TSaveDialog.Create(self);
        salvar.Title := 'Guarda tu noticia';
        salvar.InitialDir := GetCurrentDir;
        salvar.Filter := 'Text file|*.txt|Word file|*.doc';
        salvar.DefaultExt := 'txt';
        salvar.FilterIndex := 1;
        if salvar.Execute
        then begin
          noticia.SaveToFile(salvar.FileName);
          ShowMessage('Archivo se guardo correctamente.');
        end
        else ShowMessage('No se guardo la noticia.');


    finally
         wea.Free;
         noticia.free;
         salvar.Free;
    end;
end;

end.
