#include "figure.hpp"
#include <iostream>
using namespace std;

void printFigura(const Figura& f) {
	cout << "Vrsta figure: ";
	switch (f.getId()) {
		case 0: 
			cout << "FIGURA" << endl;
			break;
		case 1: 
			cout << "KRUG" << endl;
			break;
		case 2: 
			cout << "TROUGAO" << endl;
			break;
		case 3: 
			cout << "PRAVOUGAONIK" << endl;
			break;
		case 4: 
			cout << "KVADRAT" << endl;
			break;
	}

	cout << "Obim: " << f.getO() << endl;
	cout << "Povrsina: " << f.getP() << endl;
	cout << "Broj aktuelnih objekata: " << f.getCount() << endl;
}

int main() {
	Krug k1, k2(4);
	Trougao t1, t2(2, 5, 5);
	Pravougaonik p1, p2(5, 6);
	Kvadrat kv1, kv2(5);

	printFigura(k1);
	printFigura(k2);
	printFigura(t1);
	printFigura(t2);
	printFigura(p1);
	printFigura(p2);
	printFigura(kv1);
	printFigura(kv2);

	return 0;
}