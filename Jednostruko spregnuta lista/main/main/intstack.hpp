#ifndef INTSTACK_DEF
#define INTSTACK_DEF

#include "list.hpp"

class IntStack : private List { // private?
private:
	void clear(); // zasto ova metoda u private polje?
public:
	IntStack();
	IntStack(const IntStack&);
	~IntStack();

	IntStack& operator=(const IntStack&);
	friend ostream& operator<<(ostream&, const IntStack&);
	int top() const;
	void pop();
	void push(int element);
	bool emptyStack() const;
	int stackSize() const;
};

#endif