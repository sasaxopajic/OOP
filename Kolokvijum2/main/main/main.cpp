#include <iostream>
#include "lokal.hpp"
#include "prodavnica.hpp"
using namespace std;

int main()
{
    Lokal l1, l2("Lokal 1", "Temerinska ulica");
    cout << l1 << endl;
    cout << l2 << endl;
    l1.getNaziv();
    l1.getAdresa();
    l1.setNaziv("Novi Naziv");
    l1.setAdresa("Nova adresa");
    cout << l1 << endl;
    Artikal a1, a2(111, "Naocare", 100, 3), a3(222, "Monitor", 123.45, 10), a4(111, "Lopta", 0, 0);
    Artikal a5(333, "Ranac", 5, 2), a6(444, "Laptop", 2000, 14), a7(555, "Stolica", 30, 22);
    Prodavnica p(l2);
    p.dodajArtikal(&a1);
    p.dodajArtikal(&a2);
    p.dodajArtikal(&a3);
    cout << p;
    p.dodajArtikal(&a4);
    cout << p;
    p.obrisiArtikal(111);
    cout << p;
    p.kolicina(123, 10);
    cout << p;

    p.dodajArtikal(&a5);
    p.dodajArtikal(&a6);
    p.dodajArtikal(&a7);
    cout << p;
    p.sortirajArtikle(RASTUCE);
    cout << p;
    p.popust(10, 0, 100);
    cout << p;
    return 0;
}
