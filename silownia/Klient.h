#include <exception>
#include <string>
#include <vector>
using namespace std;

#ifndef __Klient_h__
#define __Klient_h__

#include "Karta_zdrowia.h"
#include "Wizyta_u_dietetyla.h"
#include "Trening_personalny.h"
#include "Grupa_zajêciowa.h"
#include "Karnet.h"

class Karta_zdrowia;
class Wizyta_u_dietetyla;
class Trening_personalny;
class Grupa_zajeciowa;
class Karnet;

class Klient
{
private:
	String _imie;
	String _nazwisko;
	int _rok_urodzenia;
	string _imie_rodzica;
	string _nazwiski_rodzica;
	char _numer_telefonu_opiekuna_prawnego;
	Karta_zdrowia* _unnamed_Karta_zdrowia_;
	Wizyta_u_dietetyla* _unnamed_Wizyta_u_dietetyla_;
	Trening_personalny* _unnamed_Trening_personalny_;
	Grupa_zajeciowa* _unnamed_Grupa_zajeciowa;
	Karnet* _unnamed_Karnet;

public: void zapisz_do_grupy_zajeciowej(*Grupa_zajeciowa);
	void zapisz_do_dietetyka();
	void zapisz_na_trening();

	Klient uaktualnij_dane(string aImie, string aNazwisko, string aImie_rodzica, string aNazwisko_rodzica, char aNumer_telefonu_rodzica);
	void dodaj_karte_zdrowia();
	void wglad_w_karte_zdrowia();
};

#endif
