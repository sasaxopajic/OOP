#include "intstack.hpp"

void IntStack::clear() { // nije mi jasno
	while (!empty()) {
		int* tmp = (int*)readEl(1);
		delete tmp;
		deleteEl(1);
	}
}

IntStack::IntStack(const IntStack& ds) { // konstruktor kopije
	for (int i = ds.size(); i > 0; i--) { // polazak sa vrha steka ka dnu
		int toCopy = *(int*)ds.readEl(i); // 2 pokazivaca??
		push(toCopy);
	}
}

IntStack::~IntStack() {
	clear();
}

IntStack& IntStack::operator=(const IntStack& ds) {
	if (this != &ds) {
		for (int i = ds.size(); i > 0; i--) {
			int toCopy = *(int*)ds.readEl(i);
			push(toCopy);
		}
	}
	return *this;
}

ostream& operator<< (ostream& out, const IntStack& ds) {
	if (ds.stackSize() > 0) {
		out << "------------------------------------------" << endl;
		out << *(int*)(ds.readEl(1)) << " <-- VRH STEKA" << endl;
		for (int i = 2; i <= ds.stackSize(); i++)
			out << *(int*)(ds.readEl(i)) << endl;
		out << "------------------------------------------" << endl;
	}
	else {
		out << "Stek je prazan!";
	}
	return out;
}

int IntStack::top() const { // vrh steka
	int* retVal = (int*)readEl(1);
	if (retVal == NULL) {
		exit(EXIT_FAILURE);
	}
	else {
		return *retVal;
	}
}

void IntStack::pop() {
	int* retVal = (int*)readEl(1);
	if (retVal == NULL) {
		exit(EXIT_FAILURE);
	}
	else {
		delete retVal;
		deleteEl(1);
	}
}

void IntStack::push(int element) {
	int* tmp = new int(element);
	if (tmp == NULL) {
		exit(EXIT_FAILURE);
	}
	else {
		if (!addEl(1, tmp)) { // i don't get it????
			delete tmp;
			exit(EXIT_FAILURE);
		}
	}
}

bool IntStack::emptyStack() const {
	return List::empty();
}

int IntStack::stackSize() const {
	return List::size();
}