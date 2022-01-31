#include <iostream>

template <typename T>
void Swap(T& a, T& b);

int main()
{
    using namespace std;
    int i = 10;
    int j = 20;
    cout << "i, j = " << i << ", " << j << endl;
    cout << "Uzycie funkcji obslugujacej typ int, "
        "wygenerowanej przez kompilator:\n";
    Swap(i, j);
    cout << "Teraz i, j = " << i << ", " << j << endl;

    double x = 24.5;
    double y = 81.7;
    cout << "x, y = " << x << ", " << y << endl;
    cout << "Uzycie funkcji obslugujacej typ double, "
        "wygenerowanej przez kompilator:\n";
    Swap(x, y);
    cout << "Teraz x, y = " << x << ", " << y << endl;

    return 0;
}

template <typename T>
void Swap(T& a, T& b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

