#ifndef RERNA_HPP_INCLUDED
#define RERNA_HPP_INCLUDED

#include <iostream>
using namespace std;

#define TEMP_MIN 0
#define TEMP_MAX 220
#define TEMP_KORAK 20

enum StanjeRerne {ISKLJUCENA, UKLJUCENA, POKVARENA};

class Rerna {
private:
	StanjeRerne trenutnoStanje;
	int temperatura;
public:
	Rerna(); //prazan konstruktor

	bool ukljuci();
	bool iskljuci();
	bool pokvari();
	bool popravi();

	bool pojacajTemp();
	bool smanjiTemp();

	StanjeRerne getTrenutnoStanje() const;
	int getTemp() const;
};

#endif