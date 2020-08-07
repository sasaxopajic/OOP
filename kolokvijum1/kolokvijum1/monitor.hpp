#ifndef MONITOR_HPP_INCLUDED
#define MONITOR_HPP_INCLUDED

#include "screen.hpp"

enum MonitorStates {sON, sOFF, sOUT, sTEST, sSTANDBY};

class Monitor {
private:
	MonitorStates state;
	Screen screen;
public:
	Monitor() : screen() {
		state = sOFF;
	}

	bool turnOn() {
		if (state == sSTANDBY || state == sTEST || state == sOFF) {
			state = sON;
			screen.setState(ssON);
			return true;
		}
		else {
			return false;
		}
	}

	bool turnOff() {
		if (state == sTEST || state == sON || state == sSTANDBY) {
			state = sOFF;
			screen.setState(ssOFF);
			return true;
		}
		else {
			return false;
		}
	}

	bool turnOut() {
		if (state != sOUT) {
			state = sOUT;
			screen.setState(ssOFF);
			return true;
		}
		else {
			return false;
		}
	}

	bool turnTest() {
		if (state == sON) {
			state = sTEST;
			screen.setState(ssON);
			return true;
		}
		else {
			return false;
		}
	}

	bool turnStandBy() {
		if (state == sON) {
			state = sSTANDBY;
			screen.setState(ssOFF);
			return true;
		}
		else {
			return false;
		}
	}

	bool repair() {
		if (state == sOUT) {
			state = sOFF;
			screen.setState(ssOFF);
			return true;
		}
		else {
			return false;
		}
	}

	bool incB() {
		if (state != sOFF && state != sOUT && state != sSTANDBY) {
			return screen.incB();
		}
		else {
			return false;
		}
	}

	bool decB() {
		if (state != sOFF && state != sOUT && state != sSTANDBY) {
			return screen.decB();
		}
		else {
			return false;
		}
	}

	MonitorStates getMonitorState() const {
		return state;
	}

	ScreenStates getScreenStates() const {
		return screen.getState();
	}

	int getBrightness() const {
		return screen.getBrightness();
	}

	Screen getScreen() {
		return screen;
	}
};

#endif