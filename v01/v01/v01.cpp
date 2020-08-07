// v01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include "kocka.h"

using namespace std;

int meni() {
    cout << "Izaberite operaciju" << endl;
    cout << "1. Baci kocku" << endl;
    cout << "2. Prikazi kocku" << endl;
    cout << "3. Kraj" << endl;
    cout << "Operacija: " << endl;

    int n;
    cin >> n;
    return n;
}

int main()
{
    Kocka k1; //prazan konstruktor
    Kocka k2(3); // konst. sa parametrom
    Kocka k3(k2); // konstruktor kopije obviously

    int n;
    do {
        n = meni();
        switch (n) {
        case 1:
            k1.baci();
            cout << "Alea iacta est." << endl;
            break;
        case 2:
            cout << "Vrednost kocke: " << k1.getVrednost() << endl;
            break;
        case 3:
            cout << "Kraj" << endl;
        }
    } while (n != 3);

    return 0;
}