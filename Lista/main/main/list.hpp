#ifndef LIST_DEF
#define LIST_DEF

#include <iostream>
#include <stdlib.h>
using namespace std;

struct listEl { // cvor liste
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
	int size() const;
	bool empty() const;
	bool addEl(int, void*);
	bool deleteEl(int);
	void* readEl(int) const;
	void clear();
};

#endif