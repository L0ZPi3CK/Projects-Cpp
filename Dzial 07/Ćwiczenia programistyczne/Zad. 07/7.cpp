#include <iostream>

int i_fill;
const int Max = 5;
const int* wsk_Max = &Max;

int* fill_array(double* ar, const int* limit);
void show_array(const double* ar, int* n);
void revalue(double r, double* ar, int* n);

int main()
{
    using namespace std;
    double properties[Max];
    double* wsk_properties = properties;
    int* size = fill_array(wsk_properties, wsk_Max);
    show_array(wsk_properties, size);
    if (size > 0)
    {
        cout << "Podaj czynnik zmiany wartosci: ";
        double factor;
        while (!(cin >> factor))
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Niepoprawna wartosc; podaj liczbe: ";
        }
        revalue(factor, wsk_properties, size);
        show_array(properties, size);
    }
    cout << "Gotowe.\n";
    cin.get();
    cin.get();
    return 0;
}

int* fill_array(double* ar,const int* limit)
{
    using namespace std;
    double temp;
    for (i_fill = 0; i_fill < *limit; i_fill++)
    {
        cout << "Podaj wartosc nr" << (i_fill + 1) << ": ";
        cin >> temp;

        if (!cin)
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bledne dane, wprowadzanie danych przerwane.\n";
            break;
        }
        else if (temp < 0)
            break;
        ar[i_fill] = temp;
    }
    int* wsk_i = &i_fill;
    return wsk_i;
}

void show_array(const double* ar, int* n)
{
    using namespace std;
    for (int i = 0; i < *n; i++)
    {
        cout << "Nieruchomosc nr " << (i + 1) << ": ";
        cout << ar[i] << endl;
    }
}

void revalue(double r, double* ar, int* n)
{
    for (int i = 0; i < *n; i++)
    {
        ar[i] *= r;
    }
}