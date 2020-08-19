#ifndef LOKAL_HPP_INCLUDED
#define LOKAL_HPP_INCLUDED

#include "absobjekat.hpp"

class Lokal : public AbsObjekat {
public:
	Lokal(const DinString& naz = "", const DinString& adr = "") : AbsObjekat(naz, adr) {}
	
	DinString getNaziv() const {
		return naziv;
	}

	DinString getAdresa() const {
		return adresa;
	}

	void setNaziv(const DinString& naz) {
		naziv = naz;
	}

	void setAdresa(const DinString& adr) {
		adresa = adr;
	}

	friend ostream& operator<<(ostream& out, const Lokal& l) {
		out << "Naziv: " << l.getNaziv() << endl;
		out << "Adresa: " << l.getAdresa() << endl;
		return out;
	}
};

#endif