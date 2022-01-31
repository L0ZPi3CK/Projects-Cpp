#include <iostream>

template <typename T>
void Swap(T& a, T& b);

struct job
{
	char name[40];
	double salary;
	int floor;
};

// jawna specjalizacja
template <> void Swap<job>(job& j1, job& j2);
void Show(job& j);

int main()
{
	using namespace std;
	cout.precision(2);
	cout.setf(ios::fixed, ios::floatfield);
	int i = 10, j = 20;
	cout << "i,j = " << i << ", " << j << ".\n";
	cout << "Uzycie generowanej przez kompilator funkcji"
		"zamieniajacej wartosci int";
	Swap(i, j);		//generuje void Swap(int&, int&)
	cout << "Teraz i,j = " << i << ", " << j << ".\n";

	job sue = { "Susan Yaffe", 73000.60, 7};
	job sidney = { "Sidney Taffe", 78060.72, 9 };
	cout << "Przed zamiana struktur job:\n";
	Show(sue);
	Show(sidney);
	Swap(sue, sidney);
	cout << "Po zamianie struktur job:\n";
	Show(sue);
	Show(sidney);
	return 0;
}

template <typename T>
void Swap(T& a, T& b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}

// zamiana pola salary i floor struktury job

template <> void Swap <job>(job& j1, job& j2)
{
	double t1;
	int t2;
	t1 = j1.salary;
	j1.salary = j2.salary;
	j2.salary = t1;
	t2 = j1.floor;
	j1.floor = j2.floor;
	j2.floor = t2;
}

void Show(job& j)
{
	using namespace std;
	cout << j.name << ": " << j.salary
		<< "zl na pietrze " << j.floor << endl;
}