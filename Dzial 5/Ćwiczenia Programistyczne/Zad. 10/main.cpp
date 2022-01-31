#include <iostream>
#include <string>

int main()
{

    using namespace std;

    int a,i,s;

    char z= '*';

    cout << "Podaj pierwszy bok trojkata: ";
    cin >> a;

    for (i=0; i<a; i++)
    {
        if (i>=1)
        {
          cout <<z<<endl;
        }

        for(s=0; s<i; s++)
        {
            cout << z;
        }
    }

    cout << "*";

    return 0;
}
