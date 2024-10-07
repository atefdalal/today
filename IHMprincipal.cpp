//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "IHMprincipal.h"
#include "TelloClientUDP.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TIHM *IHM;
//---------------------------------------------------------------------------
__fastcall TIHM::TIHM(TComponent* Owner)
	: TForm(Owner)
{
	IPTello = "127.0.0.1";
	tello = new TelloClientUDP(IPTello);

}
//---------------------------------------------------------------------------
void __fastcall TIHM::SpeedButton1Click(TObject *Sender)
{
    tello->ModeCommande();
}
//---------------------------------------------------------------------------
void __fastcall TIHM::SpeedButton2Click(TObject *Sender)
{
	tello->Monter(distance);
}
//---------------------------------------------------------------------------


void __fastcall TIHM::SpeedButton3Click(TObject *Sender)
{
    tello->Gauche(distance);
}
//---------------------------------------------------------------------------

