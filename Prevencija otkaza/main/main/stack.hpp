#ifndef STACK_DEF
#define STACK_DEF

#include <iostream>
using namespace std;

#define CAPACITY 100
#undef UNDERFLOW
#undef OVERFLOW

enum ErrorType {UNDERFLOW=1, OVERFLOW};

class Stack {
private:
	int t;
	int s[CAPACITY];
public:
	Stack() {
		t = -1;
	}

	bool empty() const {
		return t < 0;
	}

	bool full() const {
		return t == CAPACITY - 1;
	}

	int top() const;
	void pop();
	void push(int el);
	friend ostream& operator<< (ostream&, const Stack&); // operator ispisa, ne kontam
};

#endif