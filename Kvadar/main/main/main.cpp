#include "kocka.hpp"

int main() {
	Kvadar kv1(3, 4, 5), kv2(kv1);
	cout << "Povrsina kv1: " << kv1.getP() << endl;
	cout << "Zapremina kv1: " << kv1.getV() << endl;
	cout << "Povrsina kv2: " << kv2.getP() << endl;
	cout << "Zapremina kv2: " << kv2.getV() << endl;
	Kocka ko1(5), ko2(ko1);
	cout << "Povrsina ko1: " << ko1.getP() << endl;
	cout << "Zapremina ko1: " << ko1.getV() << endl;
	cout << "Povrsina ko2: " << ko2.getP() << endl;
	cout << "Zapremina ko2: " << ko2.getV() << endl;
	return 0;
}