#include "list.hpp"

List::List() {
	head = NULL;
	noEl = 0;
}

List::List(const List& rl) { // ne razumem
	head = NULL;
	noEl = 0;
	for (int i = 1; i <= rl.noEl; i++) {
		addEl(i, rl.readEl(i)); // zasto se ova metoda poziva u konstruktoru?
	}
}

List::~List() {
	clear();
}

List& List::operator=(const List& rl) {
	if (this != &rl) { // this je varijabla tipa const List&
		clear();
		head = NULL;
		noEl = 0;
		for (int i = 1; i <= rl.noEl; i++) {
			addEl(i, rl.readEl(i));
		}
		return *this; // vraca pokazivac zato se radi sa adresama elemenata liste ??
	}
}

bool List::addEl(int n, void* newContent) { // n-ti element liste, njegov sadrzaj
	if (n<1 || n>noEl + 1) {
		return false; // nije moguce prosiriti listu van njenog opsega niti dodati element u listu koja ne postoji
	}
	else {
		listEl* newEl = new listEl(); // kreira se nova struktura listEl(), zasto pokazivac?
		if (newEl == NULL) {
			return false;
		}
		else {
			newEl->content = newContent; // sadrzaj novog elementa
			if (n == 1) { // lista sadrzi samo jedan element
				newEl->next = head; // sledeci postaje prethodni
				head = newEl; // novi postaje glavni
				noEl++;
			}
			else {
				listEl* temp = head; // privremena promenljiva ima vrednost glavnog elementa po defaultu
				for (int i = 2; i < n; i++) { // za svaki ostali
					temp = temp->next; // znam sta se desava u naredne 3 linije ali ne umem da objasnim
					newEl->next = temp->next; 
					temp->next = newEl;
					noEl++;
				}
			}
			return true; // uspesno dodat element
		}
	}
}

bool List::deleteEl(int n) {
	if (n<1 || n>noEl) {
		return false; // nemoguce izbrisati element iz prazne liste
	}
	else {
		if (n == 1) {
			listEl* del = head;
			head = head->next; // ne kontam
			delete del;
			noEl--;
		}
		else {
			listEl* temp = head;
			for (int i = 2; i < n; i++) { // opet mi nista nije jasno
				temp = temp->next;
				listEl* del = temp->next;
				temp->next = del->next;
				delete del;
				noEl--;
			}
			return true;
		}
	}
}

void* List::readEl(int n)const {
	if (n<1 || n>noEl) {
		return false;
	}
	else {
		listEl* temp = head;
		for (int i = 1; i < n; i++) {
			temp = temp->next; // nije mi jasno sta znace ove strelice
			return temp->content;
		}
	}
}

void List::clear() {
	while (!empty()) {
		deleteEl(1);
	}
}