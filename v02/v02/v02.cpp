// v02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "rerna.hpp"

void ispis(const Rerna& r) {
    cout << "Rerna: " << endl;

    cout << "Stanje: ";
    switch (r.getTrenutnoStanje()) {
    case UKLJUCENA:
        cout << "ukljucena" << endl;
        break;
    case ISKLJUCENA:
        cout << "iskljucena" << endl;
        break;
    case POKVARENA:
        cout << "pokvarena" << endl;
        break;
    }

    cout << "Temperatura: " << r.getTemp() << endl;
}

int meni() {
    int i;

    cout << "Izaberite operaciju" << endl;
    cout << "1. Ukljuci rernu" << endl;
    cout << "2. Iskljuci rernu" << endl;
    cout << "3. Pokvari rernu" << endl;
    cout << "4. Popravi rernu" << endl;
    cout << "5. Pojacaj temperaturu" << endl;
    cout << "6. Smanji temperaturu" << endl;
    cout << "7. Prikazi stanje" << endl;
    cout << "8. Kraj rada programa" << endl;
    cout << "Operacija: ";

    cin >> i;
    return i;
}

int main()
{
    int i;
    Rerna r;

    do {
        i = meni();

        switch (i) {
        case 1:
            r.ukljuci();
            break;
        case 2:
            r.iskljuci();
            break;
        case 3:
            r.pokvari();
            break;
        case 4:
            r.popravi();
            break;
        case 5:
            r.pojacajTemp();
            break;
        case 6:
            r.smanjiTemp();
            break;
        case 7:
            ispis(r);
            break;
        case 8:
            break;
        }
    } while (i != 8);

    return 0;
}
