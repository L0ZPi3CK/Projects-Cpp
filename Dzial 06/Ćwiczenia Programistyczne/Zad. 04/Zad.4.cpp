#include <iostream>
using namespace std;

const int strsize = 20;

struct zpdw
{
    char imie [strsize];
    char stanowisko [strsize];
    char pseudozpdw [strsize];
    int preferencje;
};


int main()
{
    zpdw arr[3] =
    {
        {"Andrzej","Biurko","Tiger",3},
        {"Kuba","Szafa","Bonzo",1},
        {"Adam","Kosz","Admin",2}
    };

    cout << "Zakon programistow Dobrej Woli";
    cout << "\na. lista wg. imion\t\tb. lista wg. stanowisk\nc. lista wg. pseudonimow\td. lista wg. preferencji\nq. koniec";
    cout << "\nWybierz jedna z opcji: ";
    char opcja;
    cin >> opcja;

    while (opcja != 'q')
    {
        if (opcja == 'a')
        {
            for (int i = 0; i < 3; i++)
            {
                cout << arr[i].imie << endl;
            }
        }
        if (opcja == 'b')
        {
            for (int i = 0; i < 3; i++)
            {
                cout << arr[i].stanowisko << endl;
            }
        }
        if (opcja == 'c')
        {
            for (int i = 0; i < 3; i++)
            {
                cout << arr[i].pseudozpdw << endl;
            }
        }
        if (opcja == 'd')
        {
            for (int i = 0; i < 3; i++)
            {
                if (arr[i].preferencje == 1)
                {
                    cout << arr[i].imie << endl;
                }
                else if (arr[i].preferencje == 2)
                {
                    cout << arr[i].stanowisko << endl;
                }
                else if (arr[i].preferencje == 3)
                {
                    cout << arr[i].pseudozpdw << endl;
                }
            }
        }

        cout << "\nWybierz jedna z opcji: ";
        cin >> opcja;
    }

    return 0;
}