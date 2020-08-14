#include "pp3prizma.hpp"

#include <iostream>
using namespace std;

int main() {
	JSTrougao jst(3);
	Pravougaonik p(5, 8);
	PP3Prizma pp3p(2, 4);
	cout << "Obim JS-trougla: " << jst.getO() << endl;
	cout << "Povrsina JS-trougla: " << jst.getP() << endl;
	cout << "Obim pravougaonika: " << p.getO() << endl;
	cout << "Povrsina pravougaonika: " << p.getP() << endl;
	cout << "Povrsina PP3-prizme: " << pp3p.getP() << endl;
	cout << "Zapremina PP3-prizme: " << pp3p.getV() << endl;
	return 0;
}