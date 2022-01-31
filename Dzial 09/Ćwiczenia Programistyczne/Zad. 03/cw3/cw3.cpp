#include <iostream>
#include <new>
#include "nsp1.h"

char bufplace1[512];

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    chaff * p1[2];

    p1[0] = new (bufplace1) chaff;
    p1[1] = new chaff;
    


    cout << "To jest adres p1 = " << &p1 << endl;

    strcpy(p1[0]->dross);

    cout << "To jest adres p1[0]->dross = " << &p1[0]->dross << endl;
    cout << "To jest adres p1[0]->slag = " << &p1[0]->slag << endl;
    cout << "To jest wartosc p1[0] = " << p1[0] << endl;
    cout << "To jest wartosc p1[0]->dross = " << p1[0]->dross << endl;
    cout << "To jest wartosc p1[0]->slag = " << p1[0]->slag << endl;

    cout << endl;

    strcpy(p1[1]->dross);
    cout << "To jest adres p1[1]->dross = " << &p1[1]->dross << endl;
    cout << "To jest adres p1[1]->slag = " << &p1[1]->slag << endl;
    cout << "To jest wartosc p1[1] = " << p1[1] << endl;
    cout << "To jest wartosc p1[1]->dross = " << p1[1]->dross << endl;
    cout << "To jest wartosc p1[1]->slag = " << p1[1]->slag << endl;

    cout << endl;

    cout << "To jest adres p1[0]->dross = " << &p1[0]->dross << endl;
    cout << "To jest adres p1[0]->slag = " << &p1[0]->slag << endl;
    cout << "To jest wartosc p1[0] = " << p1[0] << endl;
    cout << "To jest wartosc p1[0]->dross = " << p1[0]->dross << endl;
    cout << "To jest wartosc p1[0]->slag = " << p1[0]->slag << endl;
}