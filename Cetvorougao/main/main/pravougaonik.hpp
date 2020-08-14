#ifndef PRAVOUGAONIK_DEF
#define PRAVOUGAONIK_DEF

#include <iostream>
using namespace std;

class Pravougaonik {
protected:
	double a;
	double b;
public:
	Pravougaonik() {
		a = 1;
		b = 2;
	}

	Pravougaonik(double aa, double bb) {
		a = aa;
		b = bb;
	}

	Pravougaonik(const Pravougaonik& p) {
		a = p.a;
		b = p.b;
	}

	void setA(double aa) {
		a = aa;
	}

	void setB(double bb) {
		b = bb;
	}

	double getA() const {
		return a;
	}

	double getB() const {
		return b;
	}

	double getO() const {
		return 2 * a + 2 * b;
	}

	double getP() const {
		return a * b;
	}
};

#endif