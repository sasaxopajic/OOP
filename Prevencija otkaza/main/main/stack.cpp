#include "stack.hpp"

int Stack::top() const {
	if (t < 0) {
		throw UNDERFLOW;
	}
	return s[t];
}

void Stack::pop() {
	if (t < 0) {
		throw UNDERFLOW;
	}
	t--;
}

void Stack::push(int el) {
	if (t = CAPACITY - 1) {
		throw OVERFLOW;
	}
	s[++t] = el; // nije mi jasno ovo ++t
}

ostream& operator<<(ostream& out, const Stack& rs) { // ne razumem
	out << endl << "----------------------" << endl;
	if (rs.t < 0)
		out << "Empty stack!";
	else {
		out << rs.s[rs.t] << " <-- TOP" << endl;
		for (int i = rs.t - 1; i >= 0; i--)
			out << rs.s[i] << endl;
	}
	return out;
}