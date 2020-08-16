#include "stack.hpp"
int main() {
	Stack s;
	try {
		//s.pop(); // Stack underflow.
		s.push(1);
		s.push(2);
		s.push(3);
		cout << s << endl;
		s.pop();
		s.pop();
		s.pop();
		//s.top(); // Stack underflow.
		for (int i = 0; i < CAPACITY; i++)
			s.push(i);
		cout << s << endl;
		//s.push(100); // Stack overflow.
	}
	catch (ErrorType er) {
		switch (er) {
		case UNDERFLOW: cout << "ERROR: Stack underflow." << endl;
			break;
		case OVERFLOW: cout << "ERROR: Stack overflow." << endl;
		}
	}
	return 0;
}