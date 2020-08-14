#include "valjak.hpp"

int main() {
	Krug k(3);
	Pravougaonik p(5, 8);
	Valjak v(2, 4);
	cout << "Obim kruga: " << k.getO() << endl;
	cout << "Povrsina kruga: " << k.getP() << endl;
	cout << "Obim pravougaonika: " << p.getO() << endl;
	cout << "Povrsina pravougaonika: " << p.getP() << endl;
	cout << "Povrsina valjka: " << v.getP() << endl;
	cout << "Zapremina valjka: " << v.getV() << endl;
	return 0;
}