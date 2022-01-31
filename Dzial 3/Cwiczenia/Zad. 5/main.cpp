#include <iostream>



int main()
{
    using namespace std;
    long long ludnosc_swiata, ludnosc_polski;
    long double procent;
    cout << "Podaj ludnosc swiata: ";
    cin >> ludnosc_swiata;
    cout << "Podaj ludnosc polski: ";
    cin >> ludnosc_polski;
    procent = ((long double) ludnosc_polski / ludnosc_swiata) * 100 ;
    cout << "Populacja Polski stanowi " << procent << "% populacji swiata.";

    return 0;
}
