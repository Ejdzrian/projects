#include <exception>
#include <vector>
using namespace std;

#ifndef __Recepcjonista_h__
#define __Recepcjonista_h__

#include "Karnet.h"
#include "Pracownik.h"
#include "Klient.h"

class Karnet;
class Pracownik;
class Recepcjonista;
class Klient;

class Recepcjonista: public Pracownik
{

public: 
	Recepcjonista();
		
	void archiwizuj_potwierdzenia_przelewu(Karnet);

	void dodaj_karnet(Karnet*, Klient*);

};

#endif
