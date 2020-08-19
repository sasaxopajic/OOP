#ifndef ABSOBJEKAT_HPP_INCLUDED
#define ABSOBJEKAT_HPP_INCLUDED

#include "dinstring.hpp"

class AbsObjekat {
protected:
	DinString naziv;
	DinString adresa;
public:
	AbsObjekat(const DinString& naz = "", const DinString& adr = "") : naziv(naz), adresa(adr) {}
	virtual DinString getNaziv() const = 0;
	virtual DinString getAdresa() const = 0;
	virtual void setNaziv(const DinString&) = 0;
	virtual void setAdresa(const DinString&) = 0;
};

#endif