#include <exception>
#include <string>
using namespace std;

#ifndef __Pracownik_h__
#define __Pracownik_h__

class Pracownik;

class Pracownik
{
private: 
	string _imie;
	string _nazwisko;
	int _iD;

	

public: 
	void wglad_do_grafiku();
};

#endif
