#include "otpornik.hpp"

int main() {
	Otpornik r1, r2;

	cout << "Unesite r1: ";
	cin >> r1;
	cout << "Unesite r2: ";
	cin >> r2;
	cout << "Redna veza: " << (r1 + r2) << endl;
	cout << "Paralelna veza: " << (r1 || r2) << endl;

	return 0;
}