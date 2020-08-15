#ifndef FIGURE_DEF
#define FIGURE_DEF

#include <math.h>
#define M_PI 3.14

class Figura {
private:
	static int count;
	static int id;
public:
	Figura() {
		count++;
	}

	~Figura() {
		count--;
	}

	virtual int getCount() const {
		return count;
	}

	virtual int getId() const {
		return id;
	}

	virtual double getO() const = 0;
	virtual double getP() const = 0;
};

class Krug : public Figura {
private:
	double r;
	static int count;
	static int id;
public:
	Krug(double rr = 1) {
		r = rr;
		count++;
	}

	~Krug() {
		count--;
	}

	double getR() const {
		return r;
	}

	int getCount() const {
		return count;
	}

	int getId() const {
		return id;
	}

	double getO() const { 
		return 2 * r * M_PI; 
	}
	
	double getP() const { 
		return r * r * M_PI; 
	}
};

class Trougao : public Figura {
private:
	double a, b, c;
	static int count;
	static int id;
public:
	Trougao(double aa = 3, double bb = 4, double cc = 5) {
		a = aa;
		b = bb;
		c = cc;
		count++;
	}

	Trougao(const Trougao& t) {
		a = t.a;
		b = t.b;
		c = t.c;
		count++;
	}

	~Trougao() {
		count--;
	}
	
	double getA() const {
		return a;
	}

	double getB() const {
		return b;
	}

	double getC() const {
		return c;
	}

	int getCount() const {
		return count;
	}

	int getId() const {
		return id;
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
	double a, b;
	static int count;
	static int id;
public:
	Pravougaonik(double aa = 1, double bb = 2) {
		a = aa;
		b = bb;
		count++;
	}

	Pravougaonik(const Pravougaonik& p) {
		a = p.a;
		b = p.b;
		count++;
	}

	~Pravougaonik() {
		count--;
	}

	double getA() const { 
		return a;
	}

	double getB() const {
		return b;
	}

	int getCount() const {
		return count;
	}

	int getId() const {
		return id;
	}

	double getO() const {
		return 2 * a + 2 * b;
	}

	double getP() const {
		return a * b;
	}
};

class Kvadrat : public Pravougaonik {
private:
	static int count;
	static int id;
public:
	Kvadrat(double aa = 1) : Pravougaonik(aa, aa) {
		count++;
	}

	Kvadrat(const Kvadrat& k) : Pravougaonik((Pravougaonik)k) {
		count++;
	}

	~Kvadrat() {
		count--;
	}

	int getCount() const {
		return count;
	}

	int getId() const {
		return id;
	}
};

#endif