#include <iostream>

long double probability(unsigned numbers, unsigned picks, unsigned numbersm, unsigned picksm);

int main()
{
    using namespace std;
    double total, choices, totalm, choicesm;

    cout << "Podaj najwieksza liczbe, jaka mozna wybrac, oraz liczbe skreslen, a nastepnie wartosci te dla megaliczby:\n";
    while ((cin >> total >> choices >> totalm >> choicesm) && choices <= total && choicesm <= totalm)
    {
        cout << "Szansa wygranej to jeden do ";
        cout << probability(total, choices, totalm, choicesm);
        cout << ".\n";
        cout << "Nastepne dwie liczby (q, aby zakonczyc): ";
    }
    cout << "do widzenia\n";
    return  0;

}

long double probability(unsigned numbers, unsigned picks, unsigned numbersm, unsigned picksm)
{
    long double result = 1.0;
    long double resultm = 1.0;
    long double n,nm;
    unsigned p,pm;

    for (n = numbers, p = picks; p > 0; n--, p--)
        result = result * n / p;
    for (nm = numbersm, pm = picksm; pm > 0; nm--, pm--)
        resultm = resultm * nm / pm;
    return (result * resultm);
}