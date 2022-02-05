// bank.cpp -- test interfejsu klasy Queue
#include <iostream>
#include <cstdlib>
#include <ctime>        // funkcja time()
#include "queue.h"

const int MIN_PER_HR = 60;
bool newcustomer(double x); // czy pojawil sie nastepny klient

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    using std::ios_base;

    // *** przygotowanie symulacji ***
    std::srand(std::time(0));   // inicjalizacja generatora liczb losowych

    cout << "Studium przypadku: bankomat Banku Stu Kas\n";
    cout << "Podaj maksymalna dlugosc kolejki: ";
    int qs;
    cin >> qs;
    Queue line(qs);             // w kolejce moze byc max qs klientow

    cout << "Podaj symoplowany czas (w godzinach): ";
    int hours;                  // liczba godzin symulacji
    cin >> hours;               
    // symolacja z jednominutowa rozdzielczoscia
    long cyclelimit = MIN_PER_HR * hours;   // liczba cykli

    cout << "Podaj srednia liczbe klientow na godzine: ";
    double perhour;             //srednia liczba nowych klientow na godzine
    cin >> perhour;
    double min_per_cust;        // sredni odstep czasowy pomiedzy klientami
    min_per_cust = MIN_PER_HR / perhour;

    Item temp;                  // dodanie nowego klienta
    long turnaways = 0;         // liczba klientow odeslanych z kolejki
    long customers = 0;         // liczba klientow przyjetych do kolejki
    long served = 0;            // liczba klientow obsluzonych w symulacji
    long sum_line = 0;          // laczna liczba oczekujacych
    int wait_time = 0;          // czas do zwolnienia bankomatu
    long line_wait = 0;         // laczny czas oczekiwania


    // *** Rozpoczecie symulacji ***
    for (int cycle = 0; cycle < cyclelimit; cycle++)
    {
        if (newcustomer(min_per_cust))  // nowy klient
        {
            if (line.isfull())
                turnaways++;
            else
            {
                customers++;
                temp.set(cycle);        // czas przybycia = nr cyklu
                line.enqueue(temp);     // dolaczenie klienta do kolejki
            }
        }
        if (wait_time <= 0 && !line.isempty())
        {
            line.dequeue(temp);         // nastepny do obsluzenia
            wait_time = temp.ptime();   // czas obsludi = wait_time
            line_wait += cycle - temp.when();
            served++;
        }
        if (wait_time > 0)
            wait_time--;
        sum_line += line.queuecount();
    }

    //zestawienie wynikow
    if (customers > 0)
    {
        cout << " liczba klientow przyjetych: " << customers << endl;
        cout << "liczba klientow obsluzonych: " << served << endl;
        cout << " liczba klientow odeslanych: " << turnaways << endl;
        cout << "    srednia dlugosc kolejki: ";
        cout.precision(2);
        cout.setf(ios_base::fixed, ios_base::floatfield);
        cout.setf(ios_base::showpoint);
        cout << (double)sum_line / cyclelimit << endl;
        cout << "    sredni czas oczekiwania: " << (double)line_wait / served << " minut\n";
    }
    else
        cout << "Brak klientow!\n";

    cout << "Gotowe!\n";
    return 0;
}

//x = sredni odstep czasowy (w minutach) pomiedzy potencjalnymi klientami
// jesli wartosc zwracana to true, w danej minucie pojawil sie klient

bool newcustomer(double x)
{
    return (std::rand() * x / RAND_MAX < 1);
}
