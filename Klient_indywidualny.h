#include <exception>
using namespace std;

#ifndef __Klient_indywidualny_h__
#define __Klient_indywidualny_h__

#include "Klient.h"

// class Klient;
class Klient_indywidualny;

class Klient_indywidualny: public Klient
{
	private: string _attribute;

	public: void kup_karnet();
};

#endif
