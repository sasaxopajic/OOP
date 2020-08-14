#ifndef KRUG_DEF
#define KRUG_DEF

#include <iostream>
using namespace std;
#define M_PI 3.14

class Krug {
private:
	double r;

public:
	Krug(double rr = 1) { // konstruktor sa parametrima
		r = rr;
	}

	double getR() const { // poluprecnik
		return r;
	}

	double getO() const { // obim
		return 2 * r * M_PI;
	}

	double getP() const { // povrsina
		return r * r * M_PI;
	}
};

#endif