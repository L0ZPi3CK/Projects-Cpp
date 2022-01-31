#include <iostream>



int main()
{
    using namespace std;
    int benzyna;
    const int km = 100;
    const double mil = 62.14;
    const double gal = 3.875;
    double galeony;
    cout << "Podaj ilosc zuzywanej benzyny na 100km: ";
    cin >> benzyna;
    galeony = (benzyna / gal) / mil;



    cout << "Zuzywasz " << benzyna << "l benzyny na " << km << "km co daje " << galeony << " galeonow na mile";


    return 0;
}
