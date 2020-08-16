#ifndef INTARRAY_DEF
#define INTARRAY_DEF

#include <iostream>
using namespace std;

class IntArray {
private:
	int* el;
	int brEl;
public:
	IntArray();
	IntArray(const int[], int);
	IntArray(const IntArray&);
	~IntArray();
	int length() const;
	int& operator[](int);
	int operator[](int) const;
	IntArray& operator=(const IntArray&);
	IntArray& operator+=(const IntArray&);
	friend bool operator==(const IntArray&, const IntArray&);
	friend bool operator!=(const IntArray&, const IntArray&);
	friend IntArray operator+(const IntArray&, const IntArray&);
	friend ostream& operator<<(ostream&, const IntArray&);
};
#endif