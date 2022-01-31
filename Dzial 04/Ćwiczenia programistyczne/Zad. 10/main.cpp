#include <iostream>
#include <array>


int main()
{

    using namespace std;

    array<double, 4> czas;

    cout << "Podaj czas (w sekundach) w jakim przebiegles 100m : ";
    cin >> czas[0];

    cout << "Podaj drugi czas (w sekundach) w jakim przebiegles 100m : ";
    cin >> czas[1];

    cout << "Podaj trzeci czas (w sekundach) w jakim przebiegles 100m : ";
    cin >> czas[2];

    czas[4] = (czas[0] + czas[1] + czas[2])/3;

    cout << "Oto srednia twoich czasow: " << czas[4] << " sekund";
    return 0;
}
