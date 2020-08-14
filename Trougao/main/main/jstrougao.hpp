#ifndef JSTROUGAO_DEF
#define JSTROUGAO_DEF

#include "jktrougao.hpp"

class JSTrougao : public JKTrougao {
public:
	JSTrougao() : JKTrougao(1, 1) {}

	JSTrougao(double aa) : JKTrougao(aa, aa) {}

	JSTrougao(const JSTrougao& jst) : JKTrougao(jst.a, jst.b) {}
};

#endif