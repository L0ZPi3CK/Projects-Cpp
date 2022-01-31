#include <iostream>
using namespace std;

void simple();  // prototyp fukcji

int main()
{
    cout << "main() wywola funkcje simple():\n";
    simple();   // wywolanie funkcji
    cout << "main() pozakonczeniu funkcji simple().\n";
    //cin.get();
    return 0;
}

void simple()
{
    cout << "Jestem prosta funkcja!.\n";
}

