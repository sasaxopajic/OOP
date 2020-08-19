#include "list.hpp"

List::List() {
	head = NULL;
	noEl = 0;
}

List::List(const List& rl) { // referenca na postojeci objekat klase List
	head = NULL; // zasto se ovde dodeljuje vrednost 
	noEl = 0;
	for (int i = 1; i <= rl.noEl; i++) { // na osnovu vec postojece liste ucitaj elemente u novu
		addEl(i, rl.readEl(i));
	}
}

List::~List() {
	clear();
}

List& List::operator=(const List& rl) { // ???
	if (this != &rl) { // sta je this? objekat klase List
		clear(); // ?
		head = NULL;
		noEl = 0;
		for (int i = 1; i <= rl.noEl; i++) {
			addEl(i, rl.readEl(i)); // dodavanje elementa u listu ali kakvu listu?
		}
	}
	else {
		return *this;
	}
}

bool List::addEl(int n, void* newContent) { 
	if (n<1 || n>noEl + 1) { // ne moze se dodati element ukoliko se prelazi opseg liste
		return false; 
	}
	else {
		listEl* newEl = new listEl(); // inicijalizacija novog elementa liste tipa struct listEl{}
		if (newEl == NULL) {
			return false;
		}
		else {
			newEl->content = newContent; // prosledjuje se vrednost newContent polju content strukture newEl
			if (n == 1) {
				newEl->next = head; // pokazivac na sledeci
				head = newEl;
				noEl++;
			}
			else { // nije mi jasno gde se sad ubacuje element u listu
				listEl* temp = head;
				for (int i = 2; i < n; i++) {
					temp = temp->next;
				}
				newEl->next = temp->next;
				temp->next = newEl;
				noEl++;
			}
			return true;
		}
	}
}

bool List::deleteEl(int n) {
	if (n<1 || n>noEl) { // zasto ovde ne ide noEl+1
		return false;
	}
	else {
		if (n == 1) {
			listEl* del = head; // del postaje head
			head = head->next; // head postaje pokazivac na sledeci
			delete del; // izbrisi head tj. del
			noEl--;
		}
		else {
			listEl* temp = head;
			for (int i = 2; i < n; i++) { // ne kontam koji element se ovde brise
				temp = temp->next;
			}
			listEl* del = temp->next;
			temp->next = del->next;
			delete del;
			noEl--;
		}
		return true;
	}
}

void* List::readEl(int n) const {
	if (n<1 || n>noEl) {
		return false;
	}
	else {
		listEl* temp = head;
		for (int i = 1; i < n; i++) {
			temp = temp->next;
		}
		return temp->content;
	}
}

void List::clear() {
	while (!empty()) { // dok ima elemenata u listi brisi jedan po jedan
		deleteEl(1);
	}
}