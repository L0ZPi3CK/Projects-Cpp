#include <iostream>
#include <string>

using namespace std;

struct Batonik // Deklaracja struktury

    {
    string Marka;
    double Waga;
    int kalorie;
    };


int main()
{

    Batonik snack =
    {
        "Mocha Munch",
        2.3,
        350
    };

    cout << "Oto lista:\n " << snack.Marka << "\n" << snack.Waga << "\n" << snack.kalorie;
    return 0;
}
