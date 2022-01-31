#include <iostream>
#include <cstring>


int main()
{
    using namespace std;
    char animal[20] = "niedzwiedz";         // zmienna animal zawiera lancuch niedzwiedz
    const char * bird = "myszolow";          // stala bird zawiera adres lancucha
    char * ps;                              // niezainicjowane

    cout << animal << " oraz ";             // wyswietl niedzwiedzia
    cout << bird << "\n";                   // wyswietl myszolowa
    //cout << ps << "\n";                   // moze pokazaæ smieci lub zawiesic program

    cout << "Podaj rodzaj zwierzencia: ";
    cin >> animal;
    // cin >> ps;                           // Moze spowodowac bledy w programie zawiesic go, ps nie wzkazuje zaalokowanej pamieci

    ps = animal;                            // Ustawienie ps na lancuch
    cout << ps << "i!\n";                   // to samo co uzycie animal
    cout << "Przed uzyciem strcpy():\n";
    cout << animal << " Pod adresem " << (int *) animal << endl;

    ps = new char[strlen(animal) + 1];      // alokacja nowej pamieci
    strcpy(ps, animal);
    cout << "Po uzyciu strcpy():\n";
    cout << animal << " Pod adresem " << (int *) animal << endl;
    cout << ps << " Pod adresem " << (int *) ps << endl;
    delete [] ps;



    return 0;
}
