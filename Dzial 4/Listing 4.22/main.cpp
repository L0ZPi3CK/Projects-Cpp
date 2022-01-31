#include <iostream>
#include <cstring>
using namespace std;
char * getname(void);
int main()
{
    char * name;        //utworzenie wskaznika bez przypisanej pamiêci

    name = getname();   //przypisanie zmiennej name adresu lancucha
    cout << name << " pod adresem " << (int *) name << "\n";
    delete [] name;     //zwolnienie pamieci

    name = getname;     //ponowne uzycie zwolnionej pamieci
    cout << name << " pod adresem " << (int *) name << "\n";
    delete [] name;
    return 0;
}

    char * getname()    // zwraca wskaznik na nowy lancuch
{
    char temp[80];      //tymczasowy bufor
    cout << "Podaj nazwisko: ";
    cin >> temp;
    char * pn = char[strlen(temp) + 1];
    strcpy(pn, temp);   //kopiowanie lancucha do krotszej tablicy
    return pn;          // po zakonczeniu funkcji temp zostanie utracone
}
