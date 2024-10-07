//---------------------------------------------------------------------------

#ifndef IHMprincipalH
#define IHMprincipalH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Buttons.hpp>
#include "TelloClientUDP.h"
#include <System.ImageList.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.ComCtrls.hpp>
//---------------------------------------------------------------------------
class TIHM : public TForm
{
__published:	// Composants gérés par l'EDI
	TSpeedButton *SpeedButton1;
	TSpeedButton *SpeedButton3;
	TTrackBar *TrackBar1;
	TSpeedButton *SpeedButton2;
	void __fastcall SpeedButton1Click(TObject *Sender);
	void __fastcall SpeedButton2Click(TObject *Sender);
	void __fastcall SpeedButton3Click(TObject *Sender);
private:	// Déclarations utilisateur
		TelloClientUDP* tello;
public:		// Déclarations utilisateur
	string IPTello;
	int distance;

	__fastcall TIHM(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TIHM *IHM;
//---------------------------------------------------------------------------
#endif
