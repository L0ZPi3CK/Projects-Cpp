#include <iostream>



int main()
{
    using namespace std;
    int nights = 1001;
    int * pt = new int;         // alokacja pamieci na wartosc int
    *pt = 1001;                 // zapis tam wartosci

    cout << "Wartoœæ nights = " << nights << ": polozenie " << &nights << endl;
    cout << "int ";
    cout << "Wartosc = " << *pt << ": polozenie = " << pt << endl;

    double * pd = new double;   // alokacja pamieci na wartosc double
    *pd = 10000001.0;           // zapis tam wartosci

    cout << "double: ";
    cout << "Wartosc = " << *pd << ": polozenie = " << pd << endl;
    cout << "Polozenie wskaznika pd: " << &pd << endl;
    cout << "Wielkosc pt = " << sizeof(pt) << endl;
    cout << "Wielkosc *pt = " << sizeof(*pt) << endl;
    cout << "Wielkosc pd = " << sizeof(pd) << endl;
    cout << "Wielkosc *pd = " << sizeof(*pd) << endl;





    return 0;
}
