#include <iostream>



int main()
{

    using namespace std;

    const int Size = 20;
    char name0 [Size];
    char name1 [Size];

    cout << "Podaj swoje imie: ";
    cin >> name0;
    cout << "Podaj swoje nazwisko: ";
    cin >> name1;

    cout << "Oto informacje zestawione w jeden napis: " << name1 << ", " << name0;

    return 0;
}
