#pragma once
#ifndef KOCKA_HPP_INCLUDED
#define KOCKA_HPP_INCLUDED

#include <iostream>
#include <cstdlib>

using namespace std;

class Kocka {
private:
    int vrednost;
public:
    Kocka(); //prazan konstruktor
    Kocka(int); //konstruktor sa parametrima
    Kocka(const Kocka&); //konstruktor kopije

    void baci();
    int getVrednost() const;
};

#endif // KOCKA_HPP_INCLUDED