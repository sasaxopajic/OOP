#include "power.hpp"

Power::Power() {
	x = 1;
	y = 1;
}

Power::Power(int a, int b) {
	x = a;
	y = b;
}

Power::Power(const Power& p) {
	x = p.x;
	y = p.y;
}

void Power::setX(int a) {
	x = a;
}

void Power::setY(int b) {
	y = b;
}

void Power::setPower(int a, int b) {
	x = a;
	y = b;
}

int Power::getX() const {
	return x;
}

int Power::getY() const {
	return y;
}

int Power::getPower() const{
	return pow(x, y);
}