#ifndef KVADRAT_DEF
#define KVADRAT_DEF

#include "pravougaonik.hpp"

class Kvadrat : public Pravougaonik {
public:
	Kvadrat() : Pravougaonik(1, 1) {}

	Kvadrat(double aa = 1) : Pravougaonik(aa, aa) {}

	Kvadrat(const Kvadrat& k) : Pravougaonik(k.a, k.b) {}
};

#endif