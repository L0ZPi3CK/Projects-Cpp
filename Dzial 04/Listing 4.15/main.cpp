#include <iostream>



int main()
{
    using namespace std;
    int updates = 6;        //deklaracja zmiennej
    int * p_updates;        //deklaracja wskaznika na int

    p_updates = &updates;   // przypisanie wskaznika na int

    //pokazanie wartosci na dwa sposoby
    cout << "Wartosci: updates = " << updates;
    cout << ", *p_updates = " << *p_updates << endl;

    //pokazanie adresu na dwa sposoby
    cout << "Adresy: &updates = " << &updates;
    cout << ", p_updates = " << p_updates << endl;

    //uzycie wskaznika do aminy wartosci
    *p_updates = *p_updates + 1;
    cout << "Teraz updates = " << updates << endl;

    return 0;
}
