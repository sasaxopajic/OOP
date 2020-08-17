#include "pair.hpp"
typedef Pair<int, int> IIPair;
typedef Pair<int, double> IDPair;
typedef Pair<double, double> DDPair;

int main() {
	Pair<int, int> x1(1, 2);
	IDPair x2(1, 2.3), x3(5, 7.8);
	x1.printPair();
	x2.printPair();
	x3.printPair();
	x3 = x2;
	x2.printPair();
	x3.printPair();
	if (x2 == x3)
		cout << "x2 i x3 su jednaki" << endl;
	else
		cout << "x2 i x3 nisu jednaki" << endl;
	return 0;
}