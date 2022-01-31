#include <iostream>

using namespace std;

int main()
{
    using namespace std;
    cout << "\aOperacja \"Kremowka\" zostala uruchomiona!\n";
    cout << "Podaj swoj kod agenta:  ____    \b\b\b\b\b\b\b\b";
    long code;
    cin >> code;
    cout << "\aPodales " << code << "...\n";
    cout << "\aKod poprawny! Prosze realizowac plan GODZINA \"W\"!\n";
    return 0;
}
