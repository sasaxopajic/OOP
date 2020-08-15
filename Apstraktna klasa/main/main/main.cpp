#include "figure.hpp"
#include <iostream>
using namespace std;

void printFigura(const Figura& f) { // ???(kreiranje objekta klase f)
	cout << "Obim: " << f.getO() << endl;
	cout << "Povrsina: " << f.getP() << endl;
}

int main() {
	Trougao t1, t2(2, 5, 5);
	Pravougaonik p1, p2(5, 6);

	printFigura(t1);
	printFigura(t2);
	printFigura(p1);
	printFigura(p2);

	return 0;
}