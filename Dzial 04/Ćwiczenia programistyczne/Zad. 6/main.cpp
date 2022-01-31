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

    Batonik snack[3] =
    {
        {"Mocha",2.15,1},
        {"Munch",2.20,2},
        {"Fajny",3.33,3},

    };

    cout << "Oto lista PIERWSZA:\n " << snack[0].Marka << "\n" << snack[0].Waga << "\n" << snack[0].kalorie <<endl<<endl;
    cout << "Oto lista DRUGA:\n " << snack[1].Marka << "\n" << snack[1].Waga << "\n" << snack[1].kalorie <<endl<<endl;
    cout << "Oto lista TRZECIA:\n " << snack[2].Marka << "\n" << snack[2].Waga << "\n" << snack[2].kalorie <<endl<<endl;
    return 0;
}
