#include <iostream>


struct inflatable               //deklaracja struktury
{
    char name[20];
    float volume;
    double price;
};

int main()
{
    using namespace std;
    inflatable guest =
    {
        "Glorius Gloria",       // wartosc pola name
        1.88,                   // wartosc pola volume
        29.99,                  // wartosc pola price
    };      // guest to zmienna strukturalna typu inflatable;
            // Zmienna te inicjalizujemy wartosciami jak powyzej
    inflatable pal =
    {
        "Audacious Arthur",
        3.12,
        32.99
    };      // pal to druga zmienna typu inflatable
    //UWAGA: w niektorych implementacjach C++ obowiazuje zapis: static inflatable guest =

        cout << "Wpisz na swoja liste gosci jeszcze: " << guest.name;
        cout << " oraz " << pal.name << "!\n";
        //pal.name jest to pole zmiennej pal
        cout << "Mozesz miec ich oboje za ";
        cout << guest.price + pal.price << " zl!\n";


    return 0;
}
