#include "klase.hpp"

int main() {
	A1 a1;
	A2 a2;
	B1 b1;
	B2 b2;

	a1.f();
	a2.f();
	b1.f();
	b2.f();
	
	A1* pa1;
	A2* pa2;
	pa1 = &b1;
	pa2 = &b2;

	cout << "*****Pokazivaci*****" << endl;
	pa1->f();
	pa2->f();

	return 0;
}