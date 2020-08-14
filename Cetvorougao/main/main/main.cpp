#include "kvadrat.hpp"

int main() {
	Pravougaonik p1(2, 5);
	cout << "Obim p1: " << p1.getO() << endl;
	cout << "Povrsina p1: " << p1.getP() << endl;
	Kvadrat k1(4);
	cout << "Obim k1: " << k1.getO() << endl;
	cout << "Povrsina k1: " << k1.getP() << endl;
	return 0;
}