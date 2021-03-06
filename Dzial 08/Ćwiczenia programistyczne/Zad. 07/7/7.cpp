#include <iostream>

struct debts
{
    char name[50];
    double amount;
};

template <typename T>
void ShowArray(T arr[], int n);

template <typename T>
void ShowArray(T* arr[], int n);

// 8b / 347
// 10b /347
// 3b /350

int main()
{
    using namespace std;
    int things[6] = { 13,31,103,301,310,130 };

    struct debts mr_E[3] =
    {
        {"Ima Wolfe", 2400.0},
        {"Ura Foxe", 1300.0},
        {"Iby Stout", 1800.0}
    };
    double* pd[3];

    for (int i = 0; i < 3; i++)
        pd[i] = &mr_E[i].amount;

    cout << "Wyliczanie rzeczy pana E.:\n";

    //thing to tablica int
    ShowArray(things, 6);   // Szablon A

    cout << "Wyliczanie dlugow pana E.:\n";
    //pd to tablica wskaznikow na double
    ShowArray(pd, 3);
    return 0;
}

template <typename T>
void ShowArray(T arr[], int n)
{
    using namespace std;
    cout << "szablon A\n";
    for (int i = 0; i < (n-1); i++)
    {
        arr[0] += arr[i+1];
    }
        cout << arr[0] << " liczba przedmiotow: " << n << endl;
}

template <typename T>
void ShowArray(T* arr[], int n)
{
    using namespace std;
    cout << "szablon B\n";
    T temp = *arr[0];
    for (int i = 0; i < (n-1); i++)
    {
        temp += *arr[i+1];
    }
    cout << temp << " liczba przedmiotow: " << n << endl;
}