// v03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "power.hpp"

int main()
{
    Power pow1;
    Power pow2(5, 2);
    Power pow3(pow2);


    cout << "pow1: X = " << pow1.getX() << "; Y = " << pow1.getY() << "; X^Y = " << pow1.getPower() << endl;
    cout << "pow2: X = " << pow2.getX() << "; Y = " << pow2.getY() << "; X^Y = " << pow2.getPower() << endl;
    cout << "pow3: X = " << pow3.getX() << "; Y = " << pow3.getY() << "; X^Y = " << pow3.getPower() << endl;


    int x, y;
    cout << endl << "Unesite ceo broj x: ";
    cin >> x;
    cout << endl << "Unesite ceo broj y: ";
    cin >> y;

    pow1.setX(x);
    pow1.setY(y);
    cout << "xy1: X = " << pow1.getX() << "; Y = " << pow1.getY() << "; X^Y = " << pow1.getPower() << endl;

    pow2.setPower(x, y);
    cout << "pow2: X = " << pow2.getX() << "; Y = " << pow2.getY() << "; X^Y = " << pow2.getPower() << endl;

	return 0;
}
