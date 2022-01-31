#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    const int a = 100;

    char slowa[a];
    //char slowa[];  - nie uruchamia sie
    //char slowa[] = {}; - uruchamia sie ale bledy
    int i = 0;

    cout << "Podawaj wyrazy kiedy skoñczysz napisz gotowe: " << endl;

    for(; strcmp(slowa,"gotowe") != 0;)
    {
        cin >> slowa;
        i++;
    }

    cout << "Oto ilosc wyrazow: " << i-1;

    return 0;
}
