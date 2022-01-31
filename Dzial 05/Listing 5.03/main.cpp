#include <iostream>


int main()
{

    using namespace std;
    int x;

    cout << "Wyrazenie x = 100 ma wartosc: " << (x = 100) << endl;
    cout << "Teraz x = " << x << endl;

    cout << "\nWyrazenie x < 3 ma wartosc: " << (x < 3) << endl;
    cout << "Wyrazenie x > 3 ma wartosc: " << (x > 3) << endl;

    cout.setf(ios_base::boolalpha);

    cout << "\nTeraz wyrazenie x < 3 ma wartosc: " << (x < 3) << endl;
    cout << "Teraz wyrazenie x > 3 ma wartosc: " << (x > 3) << endl;


    return 0;
}
