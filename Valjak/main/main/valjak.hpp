#ifndef VALJAK_DEF
#define VALJAK_DEF

#include "krug.hpp"
#include "pravougaonik.hpp"

class Valjak { // vlasnik klasa valjak sadrzi komponente krug i pravougaonik
private:
	Krug B; // baza valjka
	Pravougaonik M; // omotac valjka

public:
	Valjak(double rr, double hh) :B(rr), M(2 * rr * M_PI, hh) {} // B(poluprecnik), M(stranica a, stranica b)
	
	double getR() const {
		return B.getR();
	}

	double getH() const { // visina valjka je stranica B pravougaonika
		return M.getB();
	}

	double getP() const {
		return 2 * B.getP() + M.getP();
	}

	double getV() const {
		return B.getP() * getH();
	}
};

#endif