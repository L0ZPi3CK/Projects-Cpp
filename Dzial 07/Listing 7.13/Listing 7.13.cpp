#include <iostream>
#include <cmath>

// Struktury
struct polar
{
    double distance;
    double angle;
};

struct rect
{
    double x;
    double y;
};

// Prototypy
void rect_to_polar(const rect* pxy, polar* pda);
void show_polar(const polar* pda);

int main()
{
    using namespace std;
    rect rplace;
    polar pplace;

    cout << "Podaj wartosci x i y: ";
    while (cin >> rplace.x >> rplace.y)
    {
        rect_to_polar(&rplace, &pplace);    //Przekaz adres struktury do funkcji
        show_polar(&pplace);                //Przekaz adres struktury do funkcji
        cout << "Nastepna para liczb lub q, aby zakonczyc: ";
    }
    cout << "Gotowe.\n";
    return 0;

}

void show_polar(const polar* pda)
{
    using namespace std;
    const double Rad_to_deg = 57.29577951;

    cout << "odleglosc = " << pda->distance;        //Uzycie posredniego operatora przynaleznosci ->
    cout << ". kat = " << pda->angle * Rad_to_deg;  //Uzycie posredniego operatora przynaleznosci ->
    cout << " stopni\n";
}

void rect_to_polar(const rect* pxy, polar* pda)
{
    using namespace std;
    pda->distance = sqrt(pxy->x * pxy->x + pxy->y * pxy->y);    //Uzycie posredniego operatora przynaleznosci ->
    pda->angle = atan2(pxy->y, pxy->x);                         //Uzycie posredniego operatora przynaleznosci ->
}