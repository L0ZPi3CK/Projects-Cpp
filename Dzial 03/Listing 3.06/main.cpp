// morechar.cpp -- typ char a typ int
#include <iostream>
int main()
{
    using namespace std;
    char ch = 'M';  // przypisanie zmiennej ch kodu ASCII znaku M
    int i = ch;     // zapis tego samego kodu jako wartoœæ int
    cout << "Kod ASCII znaku " << ch << " to " << i << endl;

    cout << "Dodajemy do kodu znaku jedynke" << endl;
    ch = ch + 1;    //zmiana kodu znaku ze zmiennej ch
    i = ch;         //zapis nmowego kodu znaku w i
    cout << "Kod ASCII znaku " << ch << " to " << i << endl;

    // u¿ycie metody cout,put() do pokazania znaku
    cout << "Wypisanie char ch za pomoca cout.put(ch): " <<endl;
    cout.put(ch) << endl;


    // u¿ycie metody cout.put() do pokazania sta³ej znakowej
    cout.put('!');

    cout << endl << "Gotowe" << endl;
    return 0;
}

