#include <iostream>
#include "BadDude.h"
#include <string>

const int SIZE = 5;

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    using std::strchr;

    Person* lolas[SIZE];
    int ct;
    for (ct = 0; ct < SIZE; ct++)
    {
        char choice;
        cout << "Podaj kategorie pracownika:\n"
            << "g: Gunslinger  p:PokerPlayer  "
            << "b: BadDude  w: Wyjscie\n";
        cin >> choice;
        while (strchr("gpbw", choice) == NULL)
        {
            cout << "Wpisz g,p,b lub w: ";
            cin >> choice;
        }
        if (choice == 'w')
        {
            break;
        }
        switch (choice)
        {
        case 'g': lolas[ct] = new Gunslinger;
            break;
        case 'p': lolas[ct] = new PokerPlayer;
            break;
        case 'b': lolas[ct] = new BadDude;
            break;
        }
        cin.get();
        lolas[ct]->Set();

        std::cout << "\nOsoba " << ct << " ustawiona!\n";
    }
    cout << "\nLista pracownikow:\n";
    int i;
    for (i = 0; i < ct; i++)
    {
        cout << endl;
        lolas[i]->Show();
    }

    for (i = 0; i < ct; i++)
    {
        std::cout << "\nOsoba " << i << " zwolniona!\n";
        delete lolas[i];
    }
    cout << "Koniec\n";
    return 0;
}