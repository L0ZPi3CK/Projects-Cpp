#include <iostream>



int main()
{

    using std::cout;
    using std::cin;
    using std::endl;

    cout << "   !!! Kalkulator do sumowania i liczenia sredniej pieciu liczb !!!\n"<< endl;

    cout << "Podaj 5 wartosci: " << endl;

    double number;
    double sum = 0.0;

    for (int i = 1; i<= 5; i++)
    {
        cout << "Wartosc " << i << ": ";
        cin >> number;
        sum += number;
    }
    cout << "Suma liczb wynosi: " << sum << ",\nA ich srednia: " << sum / 5 << ". \n";
    cout << "End" << endl;
    return 0;
}
