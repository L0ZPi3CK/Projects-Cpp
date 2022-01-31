#include <iostream>



int main()
{

    using namespace std;

    char ch;
    int count = 0;      //metoda wprowadzenia
    cout << "Podawaj znaki; # konczy wprowadzanie:\n";
    cin >> ch;
    while (ch != '#')
    {
        cout << ch;
        ++count;
        cin >> ch;
    }
    cout << "\nWczytano " << count << " znakow." << endl;
    return 0;
}
