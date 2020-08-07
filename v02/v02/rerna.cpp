#include "rerna.hpp"

Rerna::Rerna() {
	trenutnoStanje = ISKLJUCENA;
	temperatura = TEMP_MIN;
}

bool Rerna::ukljuci() {

	if (trenutnoStanje == ISKLJUCENA) {
		trenutnoStanje = UKLJUCENA;
		temperatura += TEMP_KORAK;
		return true;
	}
	else {
		return false;
	}
}

bool Rerna::iskljuci() {
	if (trenutnoStanje == UKLJUCENA) {
		trenutnoStanje = ISKLJUCENA;
		temperatura = TEMP_MIN;
		return true;
	}
	else {
		return false;
	}
}

bool Rerna::pokvari() {
	if (trenutnoStanje != POKVARENA) {
		trenutnoStanje = POKVARENA;
		temperatura = TEMP_MIN;
		return true;
	}
	else {
		return false;
	}
}

bool Rerna::popravi() {
	if (trenutnoStanje == POKVARENA) {
		trenutnoStanje = ISKLJUCENA;
		temperatura = TEMP_MIN;
		return true;
	}
	else {
		return false;
	}
}

bool Rerna::pojacajTemp() {
	if (trenutnoStanje == UKLJUCENA && temperatura + TEMP_KORAK <= TEMP_MAX) {
		temperatura += TEMP_KORAK;
		return true;
	}
	else {
		return false;
	}
}

bool Rerna::smanjiTemp() {
	if (trenutnoStanje == UKLJUCENA && temperatura - TEMP_KORAK >= TEMP_MIN) {
		temperatura -= TEMP_KORAK;
		return true;
	}
	else {
		return false;
	}
}

StanjeRerne Rerna::getTrenutnoStanje() const{
	return trenutnoStanje;
}

int Rerna::getTemp() const{
	return temperatura;
}