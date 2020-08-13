#include "Semaphore.hpp"

Semaphore::Semaphore() {
	state = sOFF;
	colour = cNONE;
}

States Semaphore::getState() const {
	return state;
}

Colours Semaphore::getColour() const {
	return colour;
}

bool Semaphore::turnOn() {
	if (state == sOFF) {
		state = sON;
		colour = cRED;
		return true;
	}
	else
		return false;
}

bool Semaphore::turnOff() {
	if (state == sON || state == sBLINK) {
		state = sOFF;
		colour = cNONE;
		return true;
	}
	else 
		return false;
}

bool Semaphore::turnBlink() {
	if (state == sOFF) {
		state = sON;
		colour = cBLINK;
		return true;
	}
	else
		return false;
}

bool Semaphore::turnOut() {
	if (state != sOUT) {
		state = sOUT;
		colour = cNONE;
		return true;
	}
	else
		return false;
}

bool Semaphore::repair() {
	if (state == sOUT) {
		state = sOFF;
		colour = cNONE;
		return true;
	}
	else
		return false;
}

bool Semaphore::changeColour() {
	if (state == sON) {
		switch (colour) {
		case cRED:
			colour = cYELLOWRED;
			break;
		case cYELLOWRED:
			colour = cGREEN;
			break;
		case cGREEN:
			colour = cYELLOW;
			break;
		case cYELLOW:
			colour = cRED;
			break;
		}
		return true;
	}
	else
		return false;
}

