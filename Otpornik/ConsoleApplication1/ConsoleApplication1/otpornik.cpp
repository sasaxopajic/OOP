#include "otpornik.hpp"

Otpornik::Otpornik() {
	r = 0;
}

Otpornik::Otpornik(double rr) {
	r = rr;
}

Otpornik::Otpornik(const Otpornik& xr) {
	r = xr.r;
}

void Otpornik::setR(double rr) {
	r = rr;
}

double Otpornik::getR() const {
	return r;
}

Otpornik& Otpornik::operator=(const Otpornik& xr) {
	r = xr.r;
	return *this;
}

Otpornik operator+(const Otpornik& xr, const Otpornik& yr) { // redna veza
	Otpornik z(xr.r + yr.r); // nov objekat klase Otpornik ima vrednost zbira dva postojeca otpornika
	return z;
}

Otpornik operator||(const Otpornik& xr, const Otpornik& yr) { // paralelna veza
	Otpornik z((xr.r * yr.r) / (xr.r + yr.r));
	return z;
}

ostream& operator<<(ostream& out, const Otpornik& xr) {
	out << xr.r;
	return out;
}

istream& operator>>(istream& in, Otpornik& xr) {
	in >> xr.r;
	return in;
}