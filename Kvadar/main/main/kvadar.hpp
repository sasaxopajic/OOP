#ifndef KVADAR_DEF
#define KVADAR_DEF

#include "pravougaonik.hpp"

class Kvadar {
protected:
	Pravougaonik B;
	Pravougaonik M;

public:
	Kvadar(double aa = 1, double bb = 2, double hh = 1) : B(aa, bb), M(2*aa + 2*bb, hh){}
	Kvadar(const Kvadar &kv) : B(kv.B), M(kv.M) {}

	double getA() const {
		return B.getA();
	}

	double getB() const {
		return B.getB();
	}

	double getH() const {
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