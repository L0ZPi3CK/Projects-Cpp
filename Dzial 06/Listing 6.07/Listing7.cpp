#include <iostream>
#include <climits> 

bool is_int(double);

int main()
{
    using namespace std;
    double num;
    cout << "Podaj liczbe calkowita: ";
    cin >> num;
    while (!is_int(num))    //tak dlugo az usyskamy liczbe dajaca sie przypisac do int
    {
        cout << "Poza zakresem - probuj dalej: ";
        cin >> num;
    }
    int val = int(num); //rzutowanie typu
    cout << "Podana liczba calkowita to " << val << "\nBywaj\n";
    return 0;
}

bool is_int(double x)
{
    if (x <= INT_MAX && x >= INT_MIN)
        return true;
    else
        return false;
}