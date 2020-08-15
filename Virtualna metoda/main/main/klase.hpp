#ifndef KLASE_DEF
#define KLASE_DEF

#include <iostream>
using namespace std;

class A1 {
public:
	void f() {
		cout << "Klasa A1: f()" << endl;
	}
};

class A2 {
public:
	virtual void f() {
		cout << "Klasa A2: f()" << endl;
	}
};

class B1 : public A1 {
public:
	void f() {
		cout << "Klasa B1: f()" << endl;
	}
};

class B2 : public A2 {
public:
	void f() {
		cout << "Klasa B2: f()" << endl;
	}
};

#endif