#include <exception>
using namespace std;

#ifndef __Grupa_zaj�ciowa_h__
#define __Grupa_zaj�ciowa_h__

// #include "Klient.h"
// #include "Trener.h"

class Klient;
class Trener;
class Grupa_zaj�ciowa;

class Grupa_zaj�ciowa
{
	private: string _godzina:_int_;
	private: string _rodzaj_zaj��:_string;
	private: string _liczba_os�b:int;
	private: string _sala:int;
	private: string _data:_int;
	public: Klient* _unnamed_Klient_;
	public: Trener* _unnamed_Trener_;

	public: void dodaj_uczestnika();

	public: void usun_uczestnika();

	public: void analizuj_godziny_zaj��();
};

#endif
