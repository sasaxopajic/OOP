#include "intstack.hpp"

// ne razumem nista

void IntStack::clear() {
	while (!empty()) {
		int* tmp = (int*)readEl(1);
		delete tmp;
		deleteEl(1);
	}
}

IntStack::IntStack(const IntStack& ds) {
	for (int i = ds.size(); i > 0; i--) {
		int toCopy = *(int*)ds.readEl(i);
		push(toCopy);
	}
}

IntStack::~IntStack() {
	clear();
}

IntStack& IntStack::operator=(const IntStack& ds) {
	if (this != &ds) {
		clear();
		for (int i = ds.size(); i > 0; i--) {
			int toCopy = *(int*)ds.readEl(i);
			push(toCopy);
		}
	}
	return *this;
}

ostream& operator<<(ostream& out, const IntStack& s) {
	if (s.stackSize() > 0) {
		out << "------------------------------------------" << endl;
		out << *(int*)(s.readEl(1)) << " <-- VRH STEKA" << endl;
		for (int i = 2; i <= s.stackSize(); i++)
			out << *(int*)(s.readEl(i)) << endl;
		out << "------------------------------------------" << endl;
	}
	else
		out << "Stek je prazan!";
	return out;
}

int IntStack::top() const {
	int* retVal = (int*)readEl(1);
	if (retVal == NULL) {
		exit(EXIT_FAILURE);
	}
	else
		return *retVal;
}

void IntStack::pop() {
	int* retVal = (int*)readEl(1);
	if (retVal == NULL)
		exit(EXIT_FAILURE);
	else {
		delete retVal;
		deleteEl(1);
	}
}

void IntStack::push(int element) {
	int* tmp = new int(element);
	if (tmp == NULL)
		exit(EXIT_FAILURE);
	else {
		if (!addEl(1, tmp)) {
			delete tmp;
			exit(EXIT_FAILURE);
		}
	}
}

bool IntStack::emptyStack()const {
	return List::empty();
}

int IntStack::stackSize()const {
	return List::size();
}