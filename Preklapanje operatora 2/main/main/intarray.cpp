#include "intarray.hpp"

IntArray::IntArray() {
	el = NULL;
	brEl = 0;
}

IntArray::IntArray(const int ulazniNiz[], int n) {
	brEl = n;
	el = new int[brEl];
	for (int i = 0; i < brEl; i++) {
		el[i] = ulazniNiz[i];
	}
}

IntArray::IntArray(const IntArray& ra) {
	brEl = ra.brEl;
	el = new int[brEl];
	for (int i = 0; i < brEl; i++) {
		el[i] = ra.el[i] ;
	}
}

IntArray::~IntArray() {
	delete[] el;
}

int IntArray::length() const {
	return brEl;
}

int& IntArray::operator[](int i) {
	return el[i];
}

int IntArray::operator[](int i) const {
	return el[i];
}

IntArray& IntArray::operator=(const IntArray& ra) {
	if (this != &ra) {
		delete[] el;
		brEl = ra.brEl;
		el = new int[brEl];
		for (int i = 0; i < brEl; i++) {
			el[i] = ra.el[i];
		}
	}
	else {
		return *this;
	}
}

IntArray& IntArray::operator+=(const IntArray& ra) {
	int i;
	int* tempEl = new int[brEl + ra.brEl];
	for (i = 0; i < brEl; i++) {
		tempEl[i] = el[i];
	}
	for (i = 0; i < ra.brEl; i++) {
		tempEl[brEl + i] = ra.el[i];
	}
	brEl += ra.brEl;
	delete[] el;
	el = tempEl;
	return *this;
}

bool operator==(const IntArray& ra1, const IntArray& ra2) {
	if (ra1.brEl != ra2.brEl) {
		return false;
	}
	else {
		for (int i = 0; i < ra1.brEl; i++) {
			if (ra1.el[i] != ra2.el[i]) {
				return false;
			}
		}
		return true;
	}
}

bool operator!=(const IntArray& ra1, const IntArray& ra2) {
	if (ra1.brEl != ra2.brEl) {
		return true;
	}
	else {
		for (int i = 0; i < ra1.brEl; i++) {
			if (ra1.el[i] != ra2.el[i]) {
				return true;
			}
		}
		return false;
	}
}

IntArray operator+(const IntArray& ra1, const IntArray& ra2) {
	IntArray temp;
	temp.brEl = ra1.brEl + ra2.brEl;
	temp.el = new int[temp.brEl];
	int i;
	for (i = 0; i < ra1.brEl; i++) {
		temp.el[i] = ra1.el[i];
	}
	for (int j = 0; j < ra2.brEl; j++) {
		temp.el[i + j] = ra2.el[j];
	}
	return temp;
}

ostream& operator<<(ostream& out, const IntArray& ra) {
	int i;
	for (i = 0; i < ra.brEl; i++) {
		out << ra.el[i] << " ";
	}
	return out;
}