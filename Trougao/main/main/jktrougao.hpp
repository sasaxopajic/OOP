#ifndef JKTROUGAO_DEF
#define JKTROUGAO_DEF

#include "trougao.hpp"

class JKTrougao : public Trougao {
public:
	JKTrougao() : Trougao(1, 2, 2) {}
	
	JKTrougao(double aa, double bb) : Trougao(aa, bb, bb) {}

	JKTrougao(const JKTrougao &jkt) : Trougao(jkt.a, jkt.b, jkt.c) {} // zasto c, a ne b?
};

#endif