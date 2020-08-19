#ifndef ARTIKAL_HPP_INCLUDED
#define ARTIKAL_HPP_INCLUDED

#include "dinstring.hpp"

class Artikal {
private:
	int sifra;
	DinString naziv;
	float cena;
	int kolicina;
public:
	Artikal(int s = 123, const DinString& n="", float c = 0, int k = 0) : sifra(s), naziv(n), cena(c), kolicina(k) {}

	int getSifra() const {
		return sifra;
	}

	int getKolicina() const {
		return kolicina;
	}

	void setKolicina(int k) {
		kolicina = k;
	}

	float getCena() const {
		return cena;
	}

	void setNaziv(DinString n) {
		naziv = n;
	}

	DinString getNaziv() const {
		return naziv;
	}

	void setCena(float c) {
		cena = c;
	}

	friend ostream& operator<<(ostream& out, const Artikal& a) {
		out << "----Artikal----" << endl;
		out << "Sifra: " << a.sifra << endl;
		out << "Naziv: " << a.naziv << endl;
		out << "Cena:" << a.cena << endl;
		out << "Kolicina:" << a.kolicina << endl;
		return out;
	}
};

#endif