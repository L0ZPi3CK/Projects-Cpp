#include <iostream>
#include <cstring>
using namespace std;

struct stringy
{
    char* lan;  // wskaznik na lancuch
    int ct;     // dlugosc lancucha
};


// prototypy

//template<class T1>
void show(char str[], int number=1);              // 1 funkcja
void show(const stringy& str, int number=1);     // 2 funckja

void set(const stringy& str, char* stry);        // 3 funkcja



int main()
{
    stringy beany;  
    char testing[] = "Rzeczywistosc to juz nie to, co kiedys.";
    
    set(beany, testing);  // pierwszy parametr jako referencja
                            // alokacja pamieci na wynik sprawdzania
                            // ustawienie pola str struktury tak aby wskazywala na nowy blok
                            // kopiowanie testing do nowego bloku
                            // ustawienie pola ct zmiennej beany

    show(beany);   //pokazuje napis z pola raz
    show(beany,2); //pokazuje napis z pola dwukrotnie
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing, 3);
    show("Gotowe");
    return 0;
}

void set(stringy& str, char* stry)
{
    str.lan = stry;
    str.ct = strlen(str.lan);
}

void show(const char str[], int number)
{
    while (number > 0)
    {
        cout << str << endl;
        number--;
    }
}

void show(const stringy& str, int number)
{
    while(number>0)
    {
        cout << str.lan << endl;
        number--;
    }
}
