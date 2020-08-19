#ifndef PRODAVNICA_HPP_INCLUDED
#define PRODAVNICA_HPP_INCLUDED

#include "lokal.hpp"
#include "artikal.hpp"
#include "list.hpp"

enum VrstaSortiranja {OPADAJUCE, RASTUCE};

class Prodavnica {
private:
	Lokal lokal;
	List<Artikal*> artikli; // zasto pokazivac?
public:
	Prodavnica(const Lokal& l) {
		lokal.setNaziv(l.getNaziv());
		lokal.setAdresa(l.getAdresa());
	}

	bool dodajArtikal(Artikal* artikal) {
		Artikal* pa;
		for (int i = 1; i < artikli.size(); i++) {
			artikli.read(i, pa);
			if (pa->getSifra() == artikal->getSifra()) {
				pa->setCena(artikal->getCena());
				pa->setKolicina(artikal->getKolicina());
				pa->setNaziv(artikal->getNaziv());
				return true;
			}
		}
		return artikli.add(artikli.size() + 1, artikal);
	}

	bool obrisiArtikal(int sifra) {
		Artikal* pa;
		for (int i = 1; i <= artikli.size(); i++) {
			artikli.read(i, pa);
			if (pa->getSifra() == sifra) {
				artikli.remove(i);
				return true;
			}
		}
		return false;
	}

	bool kolicina(int sifra, int kolicina) {
		Artikal* pa;
		for (int i = 1; i <= artikli.size(); i++) {
			artikli.read(i, pa);
			if (pa->getSifra() == sifra) {
				pa->setKolicina(pa->getKolicina() + kolicina);
				return true;
			}
		}
		return false;
	}

	void popust(int popust, int kolicina1, int kolicina2) {
		Artikal* pa;
		for (int i = 1; i <= artikli.size(); i++) {
			artikli.read(i, pa);
			if (pa->getKolicina() >= kolicina1 && pa->getKolicina() <= kolicina2) {
				pa->setCena(pa->getCena() - (pa->getCena() * popust / 100));
			}
		}
	}

	void sortirajArtikle(VrstaSortiranja vs) {
		if (vs == RASTUCE) {
			Artikal* pi;
			Artikal* pj;
			for (int i = 1; i < artikli.size(); i++) {
				for (int j = i + 1; j <= artikli.size(); j++) {
					artikli.read(i, pi);
					artikli.read(j, pj);
					if ((pi->getCena()) < (pj->getCena())) {
						artikli.remove(i);
						artikli.add(i, pj);
						artikli.remove(j);
						artikli.add(j, pi);
					}
				}
			}
		}
		else {
			Artikal* pi;
			Artikal* pj;
			for (int i = 1; i < artikli.size(); i++) {
				for (int j = i + 1; j <= artikli.size(); j++) {
					artikli.read(i, pi);
					artikli.read(j, pj);
					if ((pi->getCena()) > (pj->getCena())) {
						artikli.remove(i);
						artikli.add(i, pj);
						artikli.remove(j);
						artikli.add(j, pi);
					}
				}
			}
		}
	}

	friend ostream& operator<<(ostream& out, const Prodavnica& p) {

		out << "----Prodavnica----" << endl;
		out << p.lokal << endl;

		Artikal* pa;

		for (int i = 1; i <= p.artikli.size(); i++) {
			p.artikli.read(i, pa);
			cout << (*pa) << endl;
		}
		return out;
	}
};


#endif