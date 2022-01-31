#include <iostream>
#include <cctype>
#include "nag.h"


int main()
{
    using namespace std;
    Stack st = Stack();
    char ch;
    customer po;
    cout << "Nacisnij D, aby wprowadzic doklaracje, \n"
        << "P, aby prztworzyc deklaracje, lub K, aby zakonczyc.\n";

    while (cin >> ch && toupper(ch) != 'K')
    {
        while (cin.get() != '\n')
            continue;
        if (!isalpha(ch))
        {
            cout << '\a';
            continue;
        }
        switch (ch)
        {
        case 'D':
        case 'd':
                cout << "Podaj imie: ";
                cin >> po.fullname;
                cout << "Podaj naleznosc: ";
                cin >> po.payment;
                if (st.isfull())
                    cout << "Stos pelen!\n";
                else
                    st.push(po);
                break;
        case 'P':
        case 'p':
                if (st.isempty())
                    cout << "Stos pusty!\n";
                else
                {
                    st.pop(po);
                    cout << "Naleznosc " << po.fullname << " zdjeta\n";
                }
                break;
        }
        cout << "Nacisnij D, aby wprowadzic doklaracje, \n"
            << "P, aby prztworzyc deklaracje, lub K, aby zakonczyc.\n";
    }
    cout << "Fajrant!\n";
}
