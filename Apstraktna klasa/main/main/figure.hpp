#ifndef FIGURE_DEF
#define FIGURE_DEF

#include <math.h>

class Figura {
public:
	virtual double getO() const = 0;
	virtual double getP() const = 0;
};

class Trougao : public Figura {
private:
	double a;
	double b;
	double c;
public:

	Trougao(double aa = 3, double bb = 4, double cc = 5) {
		a = aa;
		b = bb;
		c = cc;
	}

	Trougao(const Trougao& t) {
		a = t.a;
		b = t.b;
		c = t.c;
	}

	double getO() const {
		return a + b + c;
	}

	double getP() const {
		double s = (a + b + c) / 2;
		return sqrt(s * (s - a) * (s - b) * (s - c));
	}
};

class Pravougaonik : public Figura {
private:
	double a;
	double b;
public:

	Pravougaonik(double aa = 1, double bb = 2) {
		a = aa;
		b = bb;
	}

	Pravougaonik(const Pravougaonik& p) {
		a = p.a;
		b = p.b;
	}

	double getO() const {
		return 2 * a + 2 * b;
	}

	double getP() const {
		return a * b;
	}
};

#endif