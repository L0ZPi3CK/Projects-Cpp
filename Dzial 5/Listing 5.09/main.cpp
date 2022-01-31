#include <iostream>
#include <string>


int main()
{

    using std::cout;
    using std::cin;
    using std::endl;
    using std::string;

    cout << "Podaj slowo: ";
    string word;
    cin >> word;

    char temp;
    int i, j;
    for (j = 0, i = word.size() - 1; j < i; --i, ++j)           // przecinek zastosowany do laczenia dwoch (inicjalizacji - "j = 0, i = word.size() - 1" w jedno wyrazenie.
    {                                                           // oraz zastosowany do zl¹czenia dwoch (aktualizacji wartosci - "--i, ++j" ) w jedno wyrazenie.
        temp = word[i];                                         // {
        word[i] = word[j];                                      // Program zamienia pierwszy element tablicy z ostatnim.
        word[j] = temp;                                         // }
    }
                                                                // Nastepnie inkrementacja j " ++j" oraz dekrementacja i "--i"
    cout << word << "\nGotowe" << endl;

    return 0;
}
