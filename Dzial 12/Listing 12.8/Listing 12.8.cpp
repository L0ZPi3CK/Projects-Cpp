﻿#include <iostream>
#include <string>
#include <new>

using namespace std;
const int BUF = 512;

class JustTesting
{
private:
	std::string words;
	int number;

public:
	JustTesting(const std::string& s = "Obiekt testowy", int n = 0)
	{
		words = s;
		number = n;
		cout << words << " skonstruowany\n";
	}
	~JustTesting()
	{
		cout << words << " usuniety\n";
	}
	void Show() const
	{
		cout << words << ", " << number << endl;
	}
};

int main()
{
	char* buffer = new char[BUF];
	JustTesting* pc1, * pc2;
	pc1 = new (buffer) JustTesting;
	pc2 = new JustTesting("Stertal", 20);

	cout << "Adresy blokow pamieci:\n" << "bufor: " << (void*)buffer << " sterta: " << pc2 << endl;
	cout << "Zawartosc pamieci:\n";
	cout << pc1 << ": ";
	pc1->Show();
	cout << pc2 << ": ";
	pc2->Show();

	JustTesting* pc3, * pc4;
	pc3 = new (buffer) JustTesting("Zly pomysl", 6);
	pc4 = new JustTesting("Sterta2", 10);

	cout << "Zawartosc pamieci:\n";
	cout << pc3 << ": ";
	pc3->Show();
	cout << pc4 << ": ";
	pc4->Show();

	delete pc2;
	delete pc4;
	delete[] buffer;
	cout << "Fajrant\n";

	return 0;
}
