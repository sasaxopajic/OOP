#include "intarray.hpp"

int main() {
	const int a1[] = { 1,2,3,4,5 };
	const int a2[] = { 6,7,8 };
	const int a3[] = { 0,1,2,3,4,5,6,7,8,9 };
	const int a4[] = { 100,101,102,103 };

	IntArray ia0, ia1(a1, 5), ia2(a2, 3), ia3(a3, 10), ia4(a4, 4);
	cout << "ia0: " << ia0 << endl;
	cout << "ia1: " << ia1 << endl;
	cout << "ia2: " << ia2 << endl;
	cout << "ia3: " << ia3 << endl;
	cout << "ia4: " << ia4 << endl;
	
	IntArray ia5(ia0), ia6(ia1), ia7(ia2), ia8(ia3), ia9(ia4);
	cout << "ia5: " << ia5 << endl;
	cout << "ia6: " << ia6 << endl;
	cout << "ia7: " << ia7 << endl;
	cout << "ia8: " << ia8 << endl;
	cout << "ia9: " << ia9 << endl;
	cout << endl << "Testiranje +=" << endl;
	
	ia1 += ia2;
	ia3 += ia4;
	cout << "ia1: " << ia1 << endl;
	cout << "ia3: " << ia3 << endl;
	cout << endl << "Testiranje +" << endl;
	
	ia0 = ia5 + ia6;
	cout << "ia0: " << ia0 << endl;
	cout << endl << "Testiranje []" << endl;
	
	int x = ia1[5];
	cout << "x=ia1[5] x: " << x << endl;
	cout << endl << "Testiranje ==, = i !=" << endl;
	cout << "ia4: " << ia4 << endl;
	cout << "ia9: " << ia9 << endl;
	cout << "ia4==ia9? " << (ia4 == ia9) << endl;
	cout << "ia4!=ia9? " << (ia4 != ia9) << endl;

	return 0;
}