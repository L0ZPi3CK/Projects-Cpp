#include <iostream>
using namespace std;
const int SLEN = 30;

struct student 
{
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};

int getinfo(student pa[], int n);
void display1(student st);
void display2(const student* ps);
void display3(const student pa[], int n);

int main()
{
	cout << "Podaj wielkosc grupy: ";
	int class_size;
	cin >> class_size;
	while (cin.get() != '\n')
		continue;
	
	student* ptr_stu = new student[class_size];
	int entered = getinfo(ptr_stu, class_size);

	for (int i = 0; i < entered; i++)
	{
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}
	display3(ptr_stu, entered);
	delete[] ptr_stu;
	cout << "Gotowe\n";
	return 0;
}

int getinfo(student pa[], int n)
{
	int liczba = 0;
	//char* tester;
	for (int i = 0; i < n; i++)
	{
		cout << "Podaj imie " << i + 1 << "studenta: ";
		cin >> pa[i].fullname;
		/*
		cin.getline(pa[i].fullname,SLEN);
		cout << "pa[" << i << "].fullname = " << pa[i].fullname;
		tester = pa[i].fullname;
		cout << tester;
		if (tester == '\n')
		{
			break;
		}
		*/
		cout << "Podaj jego hobby: ";
		cin >> pa[i].hobby;
		cout << "Podaj jego ooplevel: ";
		cin >> pa[i].ooplevel;
		//cin.ignore();
		liczba++;		
	}
	return liczba;
}

void display1(student st)
{
	cout << st.fullname << endl;
	cout << st.hobby << endl;
	cout << st.ooplevel << endl;	
}

void display2(const student* ps)
{
	cout << ps->fullname << endl;
	cout << ps->hobby << endl;
	cout << ps->ooplevel << endl;
}

void display3(const student pa[], int n)
{
	int wartosc = 0;

	do
	{
		cout << "Podaj strukture do wyswietlenia! Ilosc struktur: " << n  << "\t No i 0 konczy program\nWartosc: " ;
		cin >> wartosc;
		if (wartosc-1 > n || wartosc <=0)
		{
			cout << "Nie miescisz sie w przedziale!" << endl;
			continue;
		}
		else
		{
			cout << pa[wartosc-1].fullname;
			cout << pa[wartosc-1].hobby;
			cout << pa[wartosc-1].ooplevel;
		}
	} while (wartosc != 0);
}
