#ifndef LIST_DEF
#define LIST_DEF

#include <iostream>
#include <stdlib.h>
using namespace std;

struct listEl { // objekat klase List{} jeste struktura koja predstavlja jedan element te liste
	void* content;
	struct listEl* next;
};

class List {
private:
	listEl* head;
	int noEl;
public:
	List();
	List(const List&);
	~List();
	List& operator=(const List&);
	
	int size() const {
		return noEl;
	}

	bool empty() const {
		return head == NULL;
	}

	bool addEl(int, void*);
	bool deleteEl(int);
	void* readEl(int) const;
	void clear();
};

#endif