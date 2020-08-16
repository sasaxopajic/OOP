#ifndef NIZ_DEF
#define NIZ_DEF

#include <iostream>
using namespace std;

template <class T, int D>

class Niz {
private:
	T el[D];
	int brEl;
public:
	Niz() {
		brEl = 0;
	}

	~Niz() {}

	int getBrEl() const {
		return brEl;
	}

	T operator[](int i) const {
		return el[i];
	}

	T& operator[](int i) {
		return el[i];
	}

	Niz<T, D>& operator=(const Niz<T, D>&);
	void printNiz() const;
	bool insertNiz(const T&);
};

template<class T, int D>
Niz<T, D>& Niz<T, D>::operator=(const Niz<T, D>& rn) { // nije mi bas jasno sta ovo radi
	for (brEl = 0; brEl < rn.brEl; brEl++) {
		el[brEl] = rn[brEl];
		return *this;
	}
}

template<class T, int D>
void Niz<T, D>::printNiz() const { // prolazak kroz ceo niz i stampanje clanova
	cout << "(";
	for (int i = 0; i < brEl - 1; i++) {
		cout << el[i] << ", ";
		cout << el[brEl - 1] << ")" << endl;
	}
}

template<class T, int D>
bool Niz<T, D>::insertNiz(const T& t) { // nisam siguran sta se ovde desava sem da se ubacuje nov clan u niz
	if (brEl < D) {
		el[brEl] = t;
		brEl++;
		return true;
	}
	else {
		return false;
	}
}

template <class T, int D> // ne kontam operatorEEEEEEEEEEEEEEEEEEEEEE
bool operator==(const Niz<T, D>& rn1, const Niz<T, D>& rn2) {
	if (rn1.getBrEl() != rn2.getBrEl())
		return false;
	for (int i = 0; i < rn1.getBrEl(); i++)
		if (rn1[i] != rn2[i])
			return false;
	return true;
}

template <class T, int D>
bool operator!=(const Niz<T, D>& rn1, const Niz<T, D>& rn2) {
	if (rn1.getBrEl() != rn2.getBrEl())
		return true;
	for (int i = 0; i < rn1.getBrEl(); i++)
		if (rn1[i] != rn2[i])
			return true;
	return false;
}

#endif