#include <iostream>



int main()
{

    using std::cout;
    using std::cin;
    using std::endl;


    cout << "Podaj liczbe calkowita: ";
    int by;
    cin >> by;

    cout << "Zliczanie co " << by << ":\n";

    for (int i=0; i < 100; i = i + by)
        {
            cout << i << endl;
        }

    return 0;
}
