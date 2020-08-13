#include "semaphore.hpp"

void printSemaphore(const Semaphore& rs) {
	cout << "*** Stanje semafora: ";
	switch (rs.getState()) {
	case sON: cout << "ON" << endl; break;
	case sOFF: cout << "OFF" << endl; break;
	case sOUT: cout << "OUT" << endl; break;
	case sBLINK: cout << "BLINK" << endl; break;
	}
	cout << "*** Boja: ";
	switch (rs.getColour()) {
	case cNONE: cout << "NONE" << endl; break;
	case cBLINK: cout << "BLINK" << endl; break;
	case cRED: cout << "RED" << endl; break;
	case cYELLOWRED: cout << "YELLOW" << endl; break;
	case cGREEN: cout << "GREEN" << endl; break;
	case cYELLOW: cout << "YELLOW" << endl; break;
	}
}
char meni() {
	char odg;
	do {
		cout << "Izaberite opciju: " << endl;
		cout << "1. Ukljuci semafor" << endl;
		cout << "2. Iskljuci semafor" << endl;
		cout << "3. Ukljuci trepcuce zuto" << endl;
		cout << "4. Pokvari semafor" << endl;
		cout << "5. Popravi semafor" << endl;
		cout << "6. Promeni boju" << endl;
		cout << "7. Kraj rada" << endl;
		cin >> odg;
	} while (odg < '1' || odg>'7');
	return odg;
}

int main()
{
	Semaphore s;
	char ch;
	do {
		ch = meni();
		switch (ch) {
		case '1': if (s.turnOn())
			cout << "Operacija izvrsena!" << endl;
				else
			cout << "Operacija nije izvrsena!" << endl;
			printSemaphore(s);
			break;
		case '2': if (s.turnOff())
			cout << "Operacija izvrsena!" << endl;
				else
			cout << "Operacija nije izvrsena!" << endl;
			printSemaphore(s);
			break;
		case '3': if (s.turnBlink())
			cout << "Operacija izvrsena!" << endl;
				else
			cout << "Operacija nije izvrsena!" << endl;
			printSemaphore(s);
			break;
		case '4': if (s.turnOut())
			cout << "Operacija izvrsena!" << endl;
				else
			cout << "Operacija nije izvrsena!" << endl;
			printSemaphore(s);
			break;
		case '5': if (s.repair())
			cout << "Operacija izvrsena!" << endl;
				else
			cout << "Operacija nije izvrsena!" << endl;
			printSemaphore(s);
			break;
		case '6': if (s.changeColour())
			cout << "Operacija izvrsena!" << endl;
				else
			cout << "Operacija nije izvrsena!" << endl;
			printSemaphore(s);
			break;
		}
	} while (ch != '7');
	return 0;
}