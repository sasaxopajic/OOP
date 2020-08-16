#ifndef DINSTRING_DEF
#define DINSTRING_DEF

#include <iostream>
using namespace std;

class DinString {
private:
	int duzina;
	char* text; // pokazivac na prvi clan niza tj. prvo slovo stringa
public:
	DinString();
	DinString(const char[]);
	DinString(const DinString&);
	~DinString();

	int length() const;
	char& operator[](int); 
	char operator[](int) const; 
	DinString& operator=(const DinString&); // dodela
	DinString& operator+=(const DinString&); // konkatenacija
	friend bool operator==(const DinString&, const DinString&); // provera da li su stringovi jednaki
	friend bool operator!=(const DinString&, const DinString&); // provera da li su stringovi razliciti
	friend DinString operator+(const DinString&, const DinString&);
	friend ostream& operator<<(ostream&, const DinString&); // ispis stringa
};

#endif