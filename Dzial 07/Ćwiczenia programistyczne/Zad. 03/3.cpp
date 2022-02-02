#include <iostream>

struct pudlo
{
    char producent[40];
    float wysokosc;
    float szerokosc;
    float dlugosc;
    float objetosc;
};

void wyswietl(pudlo xyz);
void adres_puldo(pudlo* pwsdo);

int main()
{
    pudlo karton = 
    {
        "IKEA",
        10,
        12,
        13,
        14
    };
    adres_puldo(&karton);
    wyswietl(karton);


}

void wyswietl(pudlo xyz)
{
    std::cout << "Dlugosc: " << xyz.dlugosc << std::endl;
    std::cout << "Objetosc: " << xyz.objetosc << std::endl;
    std::cout << "Producent: " << xyz.producent << std::endl;
    std::cout << "Szerokosc: " << xyz.szerokosc << std::endl;
    std::cout << "Wysokosc: " << xyz.wysokosc << std::endl;
}

void adres_puldo(pudlo* pwsdo)
{
    pwsdo->objetosc = (pwsdo->dlugosc * pwsdo->szerokosc * pwsdo->wysokosc);
}