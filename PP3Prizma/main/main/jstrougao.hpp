#ifndef JSTROUGAO_DEF
#define JSTROUGAO_DEF

#include <math.h>

class JSTrougao {
private:
	double a;

public:
	JSTrougao(double aa = 1) {
		a = aa;
	}

	double getA() const {
		return a;
	}

	double getO() const {
		return 3 * a;
	}

	double getP() const {
		return (a * a * sqrt(3)) / 4;
	}
};

#endif