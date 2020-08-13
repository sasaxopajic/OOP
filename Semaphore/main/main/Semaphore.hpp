#ifndef SEMAPHORE_DEF
#define SEMAPHORE_DEF

#include <iostream>
using namespace std;

enum States {sON, sOFF, sBLINK, sOUT};
enum Colours {cNONE, cRED, cYELLOW, cGREEN, cYELLOWRED, cBLINK};

class Semaphore {
private: // polja
	States state; // polje state tipa States (podaci programski definisanog tipa)
	Colours colour; // polje colour tipa Colours (-||-)

public: // metode
	Semaphore(); // objekat klase Semaphore - prazan konstruktor
	States getState() const;
	Colours getColour() const;
	bool turnOn();
	bool turnOff();
	bool turnBlink();
	bool turnOut();
	bool repair();
	bool changeColour();
};

#endif
