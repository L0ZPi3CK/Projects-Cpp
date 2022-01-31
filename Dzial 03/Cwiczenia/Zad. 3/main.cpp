#include <iostream>



int main()
{
    using namespace std;
    double stopnie, minuty, sekundy;

    cout << "Podaj dlugosc w stopniach, minutach i sekundach:" << endl;
    cout << "Podaj stopnie: ";
    cin >> stopnie;
    cout << "Podaj minuty stopnia luku: ";
    cin >> minuty;
    cout << "Podaj sekundy luku: ";
    cin >> sekundy;
    const int stopien = 60 ;
    const int minuta = 60 ;
    double dlugosc = stopnie + (minuty / minuta) + (sekundy / (minuta * stopien));
    cout << stopnie << " stopni, " << minuty << " minut, " << sekundy << " sekund = " << dlugosc << endl;


    return 0;
}
