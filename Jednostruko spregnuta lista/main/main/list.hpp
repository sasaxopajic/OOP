#ifndef LIST_DEF
#define LIST_DEF

#include <stdlib.h>
#include <iostream>
using namespace std;

struct listEl { // struktura koja predstavlja element liste
	void* content; // pokazivac na sadrzaj elementa liste
	struct listEl* next; // pokazivac na sledeci element liste
};

class List {
private:
	listEl* head; // glava liste
	int noEl; // broj elemenata liste
public:
	List(); // prazan konstruktor koji kreira objekat odnosno jedan element liste
	List(const List&);
	~List();

	List& operator=(const List&); // nista mi nije jasno
	int size() const { // broj elemenata liste odnosno njena velicina
		return noEl;
	}

	bool empty() const { // prazni listu i postavlja glavni element na NULL
		return head == NULL;
	}

	bool addEl(int, void*); // dodaje element u listu. zasto void*?

	bool deleteEl(int); // brise element iz liste. zasto ovde nema void*?

	void* readEl(int) const; // cita element liste

	void clear(); // brisanje liste?
};



#endif