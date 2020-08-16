#include "dinstring.hpp"

// KONSTRUKTORI

DinString::DinString() { // string koji ima NULL vrednost
	duzina = 0;
	text = NULL;
}

DinString::DinString(const char ulazniStr[]) {
	duzina = 0;
	while (ulazniStr[duzina] != '\0') {
		duzina++;
	}
	text = new char[duzina + 1]; // prosirenje stringa za jedno mesto
	for (int i = 0; i < duzina; i++) {
		text[i] = ulazniStr[i]; // string dobija vrednost ulaznog stringa
		text[duzina] = NULL; // kraj stringa dobija vrednost null pointera
	}
}

DinString::DinString(const DinString& ds) { //šmrk šmrk
	duzina = ds.duzina;
	text = new char[duzina + 1];
	for (int i = 0; i < duzina; i++) {
		text[i] = ds.text[i];
	}
	text[duzina] = '\0';
}

// DESTRUKTOR

DinString::~DinString() {
	delete[] text;
}

// METODE

int DinString::length() const {
	return duzina;
}

// PREKLOPLJENI OPERATORI

char& DinString::operator[](int i) { // operator indeksiranja za upis na odredjenu poziciju
	return text[i];
}

char DinString::operator[](int i) const { // operator indeksiranja za citanje neke pozicije
	return text[i];
}

DinString& DinString::operator=(const DinString& ds) {
	if (this != &ds) {
		delete[] text;
		duzina = ds.duzina;
		text = new char[duzina + 1];
		for (int i = 0; i < duzina; i++) {
			text[i] = ds.text[i];
		}
		text[duzina] = '\0';
	}
	else {
		return *this;
	}
}

DinString& DinString::operator+=(const DinString& ds) {
	int i;
	char* tempText = new char[duzina + ds.duzina + 1]; // duzina prvog + duzina drugog + pokazivac na kraj stringa
	for (i = 0; i < duzina; i++) {
		tempText[i] = text[i];
	}
	for (i = 0; i < ds.duzina; i++) {
		tempText[duzina + i] = ds.text[i];
	}
	tempText[duzina + ds.duzina] = '\0';
	delete []text;
	text = tempText;
	return *this;
}

bool operator==(const DinString& ds1, const DinString& ds2) {
	if (ds1.duzina != ds2.duzina) {
		return false;
	}
	else {
		for (int i = 0; i < ds1.duzina; i++) {
			if (ds1.text[i] != ds2.text[i]) {
				return false;
			}
		}
		return true;
	}
}

bool operator!=(const DinString& ds1, const DinString& ds2) {
	if (ds1.duzina != ds2.duzina) {
		return true;
	}
	else {
		for (int i = 0; i < ds1.duzina; i++) {
			if (ds1.text[i] != ds2.text[i]) {
				return true;
			}
		}
		return false;
	}
}

DinString operator+(const DinString& ds1, const DinString& ds2) {
	DinString temp;
	temp.duzina = ds1.duzina + ds2.duzina;
	temp.text = new char[temp.duzina + 1];

	int i;
	for (i = 0; i < ds1.duzina; i++) {
		temp.text[i] = ds1.text[i];
	}
	for (int j = 0; j < ds2.duzina; j++) {
		temp.text[i + j] = ds2.text[j];
	}
	temp.text[temp.duzina] = '\0';
	return temp;
}

ostream& operator<<(ostream& out, const DinString& ds) {
	if (ds.duzina > 0) {
		out << ds.text;
	}
	return out;
}