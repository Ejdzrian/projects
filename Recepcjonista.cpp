#include <exception>
#include <vector>
using namespace std;

#include "Recepcjonista.h"
#include "Karnet.h"
#include "Pracownik.h"
#include "Klient.h"

Recepcjonista::Recepcjonista() {
	_imie = "Michal"; 
	_nazwisko = "Kozien"; 
	_iD = 001;
}
void Recepcjonista::archiwizuj_potwierdzenia_przelewu(Karnet k) {
	cout<<"Karnet zostal wysłany do ksiegowosci"<<endl;
}

void Recepcjonista::dodaj_karnet(Karnet* k1, Klient* k2) {
	k2->set_karnet(k1);
	cout << "Karnet został dodany." << endl;
}

