#include <iostream>
#include <ctype.h>



int main()
{
    using namespace std;
    double arr[10], srednia = 0;
    int n = 0;
    cout << "Podaj 10 datkow(Wpisanie wartosci nieliczbowej konczy program): ";
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
        if (!(arr[i]))
           break;
        //cout << arr[i];
        n++;
    }

    for (int i = 0; i < n; i++)
    {
        srednia += arr[i];
    }
    cout << "Srednia wynosi: " << srednia/n << endl;

    cout << "\nWieksze od sredniej sa datki: \n";
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > (srednia/n))
        {
            cout << "arr[" << i << "] wynosi: " << arr[i] << endl;
        }
    }
}
