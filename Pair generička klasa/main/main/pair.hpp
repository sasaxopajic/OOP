#ifndef PAIR_DEF
#define PAIR_DEF

#include <iostream>
using namespace std;

template <class T1, class T2>

class Pair {
private:
	T1 first;
	T2 second;
public:
	Pair(const T1&, const T2&);
	T1 getFirst() const;
	T2 getSecond() const;
	void setFirst(const T1&); // ne kontam
	void setSecond(const T2&);
	Pair<T1, T2>& operator=(const Pair<T1, T2>&);
	void printPair() const;
};

template <class T1, class T2>
Pair<T1, T2>::Pair(const T1& f, const T2& s) : first(f), second(s){}

template <class T1, class T2>
T1 Pair<T1, T2>::getFirst() const {
	return first;
}

template <class T1, class T2>
T2 Pair<T1, T2>::getSecond() const {
	return second;
}

template<class T1, class T2>
void Pair<T1, T2>::setFirst(const T1& f) {
	first = f;
}

template<class T1, class T2>
void Pair<T1, T2>::setSecond(const T2& s) {
	second = s;
}

template<class T1, class T2>
Pair<T1, T2>& Pair<T1, T2>::operator=(const Pair<T1, T2>& p) {
	first = p.first;
	second = p.second;
	return *this; // sta je this?
}

template<class T1, class T2>
void Pair<T1, T2>::printPair() const {
	cout << "(" << first << ", " << second << ")" << endl;
}

template<class T1, class T2>
bool operator==(const Pair<T1, T2>& p1, const Pair<T1, T2>& p2) { // ne kontam operatore
	if ((p1.getFirst() == p2.getFirst()) && (p1.getSecond() == p2.getSecond()))
		return true;
	else
		return false;
}

#endif