#include <iostream>



int main()
{
    using namespace std;
    double mile, galony, paliwo, kilometry, litry, zostalo;
    cout << "Ile przejechales mil: ";
    cin >> mile;
    cout << "Ile galonow benzyny zuzyles: ";
    cin >> galony;
    cout << "Ile paliwa zostalo: ";
    cin >> paliwo;
    kilometry = mile * 1.6;
    litry = galony * 3.785411784;
    zostalo = paliwo * 3.785411784;
    cout << "Twój samochod spalil " << litry << " litrow na " << kilometry << " kilometrow i zostalo mu " << zostalo << " litrow paliwa.";


    return 0;
}
