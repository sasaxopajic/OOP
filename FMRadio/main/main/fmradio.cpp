#include "fmradio.hpp"

FMRadio::FMRadio() {
	state = sOFF;
	frequency = MIN_FREQUENCY;
	volume = MIN_VOLUME;
}

States FMRadio::getState() const {
	return state;
}

double FMRadio::getFrequency() const {
	return frequency;
}

int FMRadio::getVolume() const {
	return volume;
}

bool FMRadio::turnOn() {
	if (state == sOFF) {
		state = sON;
		return true;
	}
	else
		return false;
}

bool FMRadio::turnOff() {
	if (state == sON) {
		state = sOFF;
		return true;
	}
	else
		return false;
}

bool FMRadio::turnOut() {
	if (state != sOUT) {
		state = sOUT;
		frequency = -1;
		volume = -1;
		return true;
	}
	else
		return false;
}

bool FMRadio::repair() {
	if (state == sOUT) {
		state = sOFF;
		frequency = MIN_FREQUENCY;
		volume = MIN_VOLUME;
		return true;
	}
	else
		return false;
}

bool FMRadio::incF() {
	if (state == sON && frequency + FREQUENCY_STEP <= MAX_FREQUENCY) {
		frequency += FREQUENCY_STEP;
		return true;
	}
	else
		return false;
}

bool FMRadio::decF() {
	if (state == sON && frequency - FREQUENCY_STEP >= MIN_FREQUENCY) {
		frequency -= FREQUENCY_STEP;
		return true;
	}
	else
		return false;
}

bool FMRadio::incV() {
	if (state == sON && volume + VOLUME_STEP <= MAX_VOLUME) {
		volume += VOLUME_STEP;
		return true;
	}
	else
		return false;
}

bool FMRadio::decV() {
	if (state == sON && volume - VOLUME_STEP >= MIN_VOLUME) {
		volume -= VOLUME_STEP;
		return true;
	}
	else
		return false;
}