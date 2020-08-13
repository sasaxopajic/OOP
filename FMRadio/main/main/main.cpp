#include "fmradio.hpp"
void printFMRadio(const FMRadio& rf) {
	cout << "*** FMRadio je u stanju: ";
	switch (rf.getState()) {
	case sON: cout << "ON" << endl; break;
	case sOFF: cout << "OFF" << endl; break;
	case sOUT: cout << "OUT" << endl;
	}
	cout << "*** Frekvencija: " << rf.getFrequency() << endl;
	cout << "*** Jacina zvuka: " << rf.getVolume() << endl;
}
char meni() {
	char task;
	do {
		cout << "Izaberite opciju: " << endl;
		cout << "1. Ukljuci FMRadio" << endl;
		cout << "2. Iskljuci FMRadio" << endl;
		cout << "3. Pokvari FMRadio" << endl;
		cout << "4. Popravi FMRadio" << endl;
		cout << "5. Povecaj frekvenciju" << endl;
		cout << "6. Smanji frekvenciju" << endl;
		cout << "7. Povecaj jacinu zvuka" << endl;
		cout << "8. Smanji jacinu zvuka" << endl;
		cout << "9. Kraj rada" << endl;
		cin >> task;
	} while (task < '1' || task>'9');
	return task;
}
int main() {
	FMRadio f;
	char option;
	do {
		option = meni();
		switch (option) {
		case '1': if (f.turnOn())
			cout << "Operacija izvrsena!" << endl;
				else
			cout << "Operacija nije izvrsena!" << endl;
			printFMRadio(f);
			break;
		case '2': if (f.turnOff())
			cout << "Operacija izvrsena!" << endl;
				else
			cout << "Operacija nije izvrsena!" << endl;
			printFMRadio(f);
			break;
		case '3': if (f.turnOut())
			cout << "Operacija izvrsena!" << endl;
				else
			cout << "Operacija nije izvrsena!" << endl;
			printFMRadio(f);
			break;
		case '4': if (f.repair())
			cout << "Operacija izvrsena!" << endl;
				else
			cout << "Operacija nije izvrsena!" << endl;
			printFMRadio(f);
			break;
		case '5': if (f.incF())
			cout << "Operacija izvrsena!" << endl;
				else
			cout << "Operacija nije izvrsena!" << endl;
			printFMRadio(f);
			break;
		case '6': if (f.decF())
			cout << "Operacija izvrsena!" << endl;
				else
			cout << "Operacija nije izvrsena!" << endl;
			printFMRadio(f);
			break;
		case '7': if (f.incV())
			cout << "Operacija izvrsena!" << endl;
				else
			cout << "Operacija nije izvrsena!" << endl;
			printFMRadio(f);
			break;
		case '8': if (f.decV())
			cout << "Operacija izvrsena!" << endl;
				else
			cout << "Operacija nije izvrsena!" << endl;
			printFMRadio(f);
			break;
		}
	} while (option != '9');
	return 0;
}