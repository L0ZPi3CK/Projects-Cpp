#include <iostream>

void swapr(int& a, int& b);     // a i b to aliasy wartosci int
void swapp(int* p, int* q);     // p i q to adresy wartosci int
void swapv(int a, int b);       // a i b to nowe zmienne

int main()
{
    using namespace std;
    int wallet1 = 300;
    int wallet2 = 350;
    
    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 << endl;

    cout << "Zmiana wartosci za pomoca referencji:\n";
    swapr(wallet1, wallet2);
    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 << endl;

    cout << "Zmiana wartosci za pomoca wskazminkow:\n";
    swapp(&wallet1, &wallet2);
    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 << endl;

    cout << "Proba zmiany przy przekazwaniu przez wartosc:\n";
    swapv(wallet1, wallet2);
    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 << endl;
    
    return 0;
}

void swapr(int& a, int& b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void swapp(int* p, int* q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}
void swapv(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    std::cout << "Oto jest a: " << a << " a Oto jest b: " << b << std::endl;
}