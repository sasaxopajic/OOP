#ifndef FMRADIO_DEF
#define FMRADIO_DEF

#include <iostream>
using namespace std;

enum States {sON, sOFF, sOUT};

#define MAX_FREQUENCY 108.0
#define MIN_FREQUENCY 87.5
#define FREQUENCY_STEP 0.5

#define MAX_VOLUME 20
#define MIN_VOLUME 0
#define VOLUME_STEP 1

class FMRadio {
private:
	States state;
	double frequency;
	int volume;

public:
	FMRadio();

	States getState() const;
	double getFrequency() const;
	int getVolume() const;
	
	bool turnOn();
	bool turnOff();
	bool turnOut();
	bool repair();
	bool incF(); // increase frequency
	bool decF(); // decrease frequency
	bool incV(); // increase volume
	bool decV(); // decrease volume
};

#endif // !FMRADIO_DEF
