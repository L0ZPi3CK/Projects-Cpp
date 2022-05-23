#include <iostream>
#include "stacktp.h"

template <template <typename T> typename Thing>
class Crab
{
private:
    Thing<int> s1;
    Thing<double> s2;

public:
    Crab() {};
    // zaklada ze klasa Thing ma skladowe push() oraz pop()
    bool push(int a, double x) { return s1.push(a) && s2.push(x); }
    bool pop(int& a, double& x) { return s1.pop(a) && s2.pop(x); }
};

int main()
{
    using std::cout;
    using std::endl;
    using std::cin;

    Crab<Stack> nebula;
    // stos musi pasowac do argumentu template <typename T> typename Thing

    int ni;
    double nb;
    cout << "Podaj pary int double w postaci 4 3.5 (0 0 konczy wpisywanie):\n";
    while (cin >> ni >> nb && ni > 0 && nb > 0)
    {
        if (!nebula.push(ni, nb))
            break;
    }
    while (nebula.pop(ni, nb))
        cout << ni << ", " << nb << endl;
    cout << "Koniec.\n";
    return 0;
}