#include <iostream>



int main()
{

    using namespace std;

    string S [2];
    S[0] = {};
    S[1] = {};

    cout << "Podaj swoje imie: ";
    cin >> S[0];

    cout << "Podaj swoje nazwisko: ";
    cin >> S[1];

    cout << "Oto informacje zestawione w jeden napis: " << S[0] << ", " << S[1];
    return 0;
}
