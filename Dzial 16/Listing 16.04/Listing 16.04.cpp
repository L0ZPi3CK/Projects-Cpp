#include <iostream>
#include <string>

int main()
{
	using namespace std;
	string empty;
	string small = "bit";
	string larger = "Sasdasdasd - asdasdas";

	cout << "Wielkosc:\n";
	cout << "\tempty: " << empty.size() << endl;
	cout << "\tsmall: " << small.size() << endl;
	cout << "\tlarger: " << larger.size() << endl;

	cout << "Pojemnosc:\n";
	cout << "\tempty: " << empty.capacity() << endl;
	cout << "\tsmall: " << small.capacity() << endl;
	cout << "\tlarger: " << larger.capacity() << endl;

	empty.reserve(50);
	cout << "Pojemnosc po wywo³aniu empty.reserve(50): " << empty.capacity() << endl;

	return 0;
 }