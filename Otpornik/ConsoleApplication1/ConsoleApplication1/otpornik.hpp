#ifndef OTPORNIK_DEF
#define OTPORNIK_DEF

#include <iostream>
using namespace std;

class Otpornik {
private:
	double r;
public:
	Otpornik();
	Otpornik(double);
	Otpornik(const Otpornik&);
	void setR(double);
	double getR() const;
	Otpornik& operator=(const Otpornik&);
	friend Otpornik operator+(const Otpornik&, const Otpornik&);
	friend Otpornik operator||(const Otpornik&, const Otpornik&);
	friend ostream& operator<<(ostream&, const Otpornik&);
	friend istream& operator>>(istream&, Otpornik&);
};

#endif