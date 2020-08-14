#ifndef KOCKA_DEF
#define KOCKA_DEF

#include "kvadar.hpp"

class Kocka : public Kvadar {
public:
	Kocka(double aa = 1) : Kvadar(aa, aa, aa) {}

	Kocka(const Kocka& k) : Kvadar((Kvadar)k) {}
};

#endif