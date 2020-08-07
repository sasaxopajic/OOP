#include "kocka.h"

Kocka::Kocka() {
    vrednost = 1;
} // konstruktor bez parametra

Kocka::Kocka(int i) {
    vrednost = i;
} //konstruktor sa parametrom

Kocka::Kocka(const Kocka& k) {
    vrednost = k.vrednost;
} //konstruktor kopije

void Kocka::baci() {
    vrednost = rand() % 6 + 1;
}

int Kocka::getVrednost() const {
    return vrednost;
}
