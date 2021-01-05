#include <exception>
#include <string>
#include <vector>
using namespace std;

#ifndef __Trener_h__
#define __Trener_h__

#include "Karta_zdrowia.h"
#include "Grupa_zaj�ciowa.h"
// #include "Wizyta_u_dietetyla.h"
#include "Trening_personalny.h"
#include "Pracownik.h"

class Karta_zdrowia;
class Grupa_zaj�ciowa;
class Wizyta_u_dietetyla;
class Trening_personalny;
// class Pracownik;
class Trener;

class Trener: public Pracownik
{
	private: string _specjalizacja;
	public: std::vector<Karta_zdrowia*> _unnamed_Karta_zdrowia_;
	public: Trener* _unnamed_Trener_;
	public: Trener* _unnamed_Trener_2;
	public: std::vector<Grupa_zaj�ciowa*> _unnamed_Grupa_zaj�ciowa_;
	public: Wizyta_u_dietetyla* _unnamed_Wizyta_u_dietetyla_;
	public: std::vector<Trening_personalny*> _unnamed_Trening_personalny_;

	public: void stw�rz_plan_treningowy();

	public: void modyfikuj_plan_treningowy(string aUnnamed__8);

	public: string dost�pno��_godzinowa();
};

#endif
