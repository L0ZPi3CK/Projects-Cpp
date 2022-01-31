#include <iostream>



int main()
{

    using namespace std;

    int n;

    cout << "Podawaj liczby od 1 do 10: \nOto one: \n\n";

    do
    {
        cin >> n;
    }while (n != 7 );

    cout << "Moja ulubiona liczba to: "<< n << endl;
    return 0;
}
