#include <iostream>
#include <cstdlib>
#include <ctime>
#include "string1.h"

const int ArSize = 10;
const int MaxLen = 81;

int main()
{
    using namespace std;
    String name;
    cout << "Czesc, jak masz na imie?\n>>";
    cin >> name;
    
    cout << name << ", wpisz do " << ArSize << " krotkich powiedzonek <pusty wiersz konczy wprowadzanie>:\n";
    String sayings[ArSize];
    char temp[MaxLen];
    int i;
    for (i = 0; i < ArSize; i++)
    {
        cout << i + 1 << ": ";
        cin.get(temp, MaxLen);
        while (cin && cin.get() != '\n')
            continue;
        if (!cin || temp[0] == '\0')
            break;
        else
            sayings[i] = temp;
    }
    int total = i;

    if (total > 0)
    {
        cout << "Oto Twoje powiedzonka:\n";
        for (i = 0; i < total; i++)
        {
            cout << sayings[i] << "\n";
        }

        //wskazniki wskazujace szukane ciagi
        String* shortest = &sayings[0]; //inicjalizacja pierwszym obiektem
        String* first = &sayings[0];
        for (i = 1; i < total; i++)
        {
            if (sayings[i].length() < shortest->length())
                shortest = &sayings[i];
            if (sayings[i] < *first)
                first = &sayings[i];
        }

        cout << "Najkrotsze powiedzonko:\n" << *shortest << endl;
        cout << "Powiedzonko alfabetycznie pierwsze:\n" << *first << endl;
        srand(time(0));
        int choice = rand() % total;
        //wywolanie operatora new do przydzialu nowego obiektu
        String* favorite = new String(sayings[choice]);
        cout << "Moje ulubione powiedzonko:\n" << *favorite << endl;
        delete favorite;
    }
    else
        cout << "Nie ma o czym gadac, co?\n";
    cout << "Zegnam.\n";
    return 0;
}