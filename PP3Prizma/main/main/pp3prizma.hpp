#ifndef PP3PRIZMA_DEF
#define PP3PRIZMA_DEF

#include "jstrougao.hpp"
#include "pravougaonik.hpp"

class PP3Prizma {
private:
	JSTrougao B;
	Pravougaonik M;

public:
	PP3Prizma(double aa = 1, double hh = 1) :B(aa), M(3 * aa, hh) {} // stranica baze, visina prizme
	
	double getA() const {
		return B.getA();
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