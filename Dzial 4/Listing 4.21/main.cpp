#include <iostream>


struct inflatable
{
    char name[20];
    float volume;
    double price;
};
int main()
{
    using namespace std;
    inflatable * ps = new inflatable;                       // alokacja pamieci na strukture
    cout << "Podaj nazwe dmuchanej zabawki: ";
    cin.get(ps->name, 20);                                  // metoda 1 dostepu do pol
    cout << "Podaj objetosc w stopniach szesciennych: ";
    cin >> (*ps).volume;
    cout << "Podaj cene (zl): ";                            // metoda 2 dostepu do pol
    cin >> ps->price;
    cout << "Nazwa: " << (*ps).name << endl;                // metoda 2

    cout << "Objetosc: " << ps->volume << " stop szesciennych\n";    // metoda 1
    cout << "Cena: " << ps->price << " zl" << endl;                 // metoda 1
    delete ps;                                                      // zwolnienie pamieci
    return 0;
}
