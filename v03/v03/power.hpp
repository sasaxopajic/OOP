#ifndef POWER_HPP_INCLUDED
#define POWER_HPP_INCLUDED

#include <iostream>
#include <cmath>
using namespace std;

class Power {
private:
	int x;
	int y;
public:
	Power();
	Power(int, int);
	Power(const Power&);

	void setX(int);
	void setY(int);
	void setPower(int, int);

	int getX() const;
	int getY() const;
	int getPower() const;
};

#endif // !POWER_HPP_INCLUDED
