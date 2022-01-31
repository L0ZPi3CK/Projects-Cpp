#include <iostream>



int main()
{
    using namespace std;
    double wzrost, stopy, cale;
    cout << "Podaj wzrost(cm) = ";
    cin >> wzrost;
    stopy = wzrost / 30.48;
    cout << "Wzrost w stopach wynosi = " << stopy << endl;
    cale = (double) wzrost / 2.54;
    cout << "Wzrost w calach wynosi = " << cale << endl;



    return 0;
}
