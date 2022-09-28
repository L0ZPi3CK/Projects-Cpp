#include <iostream>
#include "quequetp.h"
#include <string>

int main()
{
    using std::string;
    using std::cin;
    using std::cout;

    QueueTP<string> cs(5);
    string temp;
    while (!cs.isfull())
    {
        cout << "Wpisz swoje imie i nazwisko. Zostaniesz obsluzony/y "
            "wedlug kolejnosci i przybycia.\n"
            "Imie i nazwsiko: ";
        getline(cin, temp);
        cs.enqueue(temp);
    }
    cout << "Kolejka jest pelna. Rozpoczynamy przetwarzanie!\n";

    while (!cs.isempty())
    {
        cs.dequeue(temp);
        cout << "Teraz obslugujemy " << temp << "...\n";
    }
    return 0;
}