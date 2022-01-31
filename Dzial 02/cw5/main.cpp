#include <iostream>

using namespace std;
int stcel;
int zamiana(int);
int main()
{
    cout << "Podaj temperature w stopniach Celsjusza: " << endl;
    cin >> stcel;
    int Fah = zamiana(stcel);
    cout << stcel << " stopnie Celsjusza to ";
    cout << Fah << " stopnie Farhrenheita.";
    return 0;
}

int zamiana(int z)
{
    int Fah = 1.8 * stcel + 32.0;
    return Fah;
}
