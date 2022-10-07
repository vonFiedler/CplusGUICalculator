//---------------------------------------------------------------------------

#ifndef CalcH
#define CalcH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TEdit *EditDisplay;
	TEdit *AnswerDisplay;
	TButton *btnBac;
	TButton *btnAns;
	TButton *Button9;
	TButton *btnCle;
	TButton *Button13;
	TButton *Button14;
	TButton *btn9;
	TButton *btn8;
	TButton *btn7;
	TButton *Button18;
	TButton *Button19;
	TButton *btnMul;
	TButton *btn6;
	TButton *btn5;
	TButton *btn4;
	TButton *Button24;
	TButton *btnLn;
	TButton *btnSub;
	TButton *btn3;
	TButton *btn2;
	TButton *btn1;
	TButton *btnLog;
	TButton *btnP1;
	TButton *btnAdd;
	TButton *btnNeg;
	TButton *btnPoi;
	TButton *btn0;
	TButton *btnP2;
	TButton *btnDiv;
	TButton *btnPow;
	TButton *btnCot;
	TButton *btnTan;
	TButton *btnCos;
	TButton *btnSin;
	TButton *btnC1;
	TButton *btnC2;
	void __fastcall NumberClick(TObject *Sender);
	void __fastcall ParenClick1(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
