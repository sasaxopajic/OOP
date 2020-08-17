#include "list.hpp"

List::List() {
	head = NULL;
	noEl = 0;
}

List::List(const List& rl) {
	head = NULL;
	noEl = 0;
	for (int i = 1; i <= rl.noEl; i++) {
		addEl(i, rl.readEl(i));
	}
}

List::~List() {
	clear();
}

List& List::operator=(const List& rl) { // ne razumem sta znaci this
	if (this != &rl) {
		clear();
		head = NULL;
		noEl = 0;
		for (int i = 1; i <= rl.noEl; i++) {
			addEl(i, rl.readEl(i));
		}
		return *this;
	}
}

int List::size() const {
	return noEl;
}

bool List::empty() const {
	return head == NULL;
}

bool List::addEl(int n, void* newContent) {
	if (n < 1 || n > noEl + 1) {
		return false;
	}
	else {
		listEl* newEl = new listEl();
		if (newEl == NULL) {
			return false;
		}
		else {
			newEl->content = newContent; // odavde mi nista nije jasno
			if (n == 1) {
				newEl->content = head;
				head = newEl;
				noEl++;
			}
			else {
				listEl* temp = head;
				for (int i = 2; i <= n; i++) {
					temp = temp->next;
				}
				newEl->next = temp->next;
				temp->next = newEl;
				noEl++;
			}
		}
	}
}

bool List::deleteEl(int n) {
	if (n < 1 || n > noEl) {
		return false;
	}
	else {
		if (n == 1) {
			listEl* del = head;
			head = head->next;
			delete del;
			noEl--;
		}
		else {
			listEl* temp = head;
			for (int i = 2; i < n; i++) {
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
	if (n < 1 || n > noEl) {
		return NULL;
	}
	else {
		listEl* temp = head;
		for (int i = 1; i < n; i++) { // nije mi jasno ovo sa temp i strelicama xD
			temp = temp->next;
		}
		return temp->content;
	}
}

void List::clear() {
	while (!empty()) {
		deleteEl(1);
	}
}