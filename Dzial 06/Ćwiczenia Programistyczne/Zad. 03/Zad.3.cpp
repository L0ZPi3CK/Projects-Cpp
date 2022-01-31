#include <iostream>



int main()
{
    using namespace std;
    char x, y;
    int licznik = 0;
    cout << "\t\t\t***MENU***\n";
    cout << "\ta) - drzewo\n\tb) - jesc\n\tc) - drzem\n\td) - szybki\n";
    

    for (int o = 0; o == 0;)
    {
        cout << "Podaj pierwsza litere: ";
        cin >> x;
        cout << "\nPodaj druga litere: ";
        cin >> y;
        
        if (x == 'a' || x == 'b' || x == 'c' || x == 'd' && y == 'a' || y == 'b' || y == 'c' || y == 'd')
        {
            char zmienna = x;
            do
            {
                switch (zmienna)
                {
                    case 'a': cout << "drzewo "; break;
                    case 'b': cout << "jesc "; break;
                    case 'c': cout << "drzem "; break;
                    case 'd': cout << "szybki "; break;
                }
                licznik++;
                zmienna = y;
            } while (licznik != 2);

            o++;
        }
        else
        {
            cout << "Prosze podać poprawne wartosci!\n";
            continue;
        }
    }


}

