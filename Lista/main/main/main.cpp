#include "intstack.hpp"

int main() {
	IntStack a;
	cout << a << endl;
	a.push(1);
	cout << a << endl;
	a.push(2);
	a.push(3);
	cout << a << endl;
	cout << "Praznjenje steka." << endl;
	while (!a.emptyStack()) {
		cout << "Na vrhu steka je:" << a.top() << endl;
		a.pop();
	}
	cout << endl << "Punjenje steka." << endl;
	for (int i = 0; i < 10; i++)
		a.push(i * 10);
	cout << a << endl;
	return 0;
}