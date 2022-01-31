#include <iostream>
#include "stock20.h"

const int STKS = 4;

int main()
{
    // tablica zainicjalizowanych obiektow
    Stock stocks[STKS] =
    {
        Stock("NanoSmart", 12, 20.0),
        Stock("BurakPOL", 200, 2.0),
        Stock("GruzPOL", 130, 3.25),
        Stock("FutroPOL", 60, 6.5)
    };

    std::cout << "Portfel inwestycyjny:\n";
    int st;
    for (st = 0; st < STKS; st++)
        stocks[st].show();

    const Stock* top = &stocks[0];
    for (st = 0; st < STKS; st++)
        top = &top->topval(stocks[st]);
    // teraz top wskazuje do najbardziej wartosciowych udzialow w portfelu

    std::cout << "\nNajbardziej wartosciowy pakiet:\n";
    top->show();
    return 0;
}

