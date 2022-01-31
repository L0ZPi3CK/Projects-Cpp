#include <iostream>

void oil(int x);

int main()
{

    using namespace std;
    int texas = 31;
    int year = 2011;
    cout << "W funkcji main() texas = " << texas << ", &texas = " << &texas << endl;
    cout << " W funkcji main() year = " << year << ", & year = " << &year << endl;
    oil(texas);

    cout << "W funkcji main() texas = " << texas << ", &texas = " << &texas << endl;
    cout << " W funkcji main() year = " << year << ", & year = " << &year << endl;
    
    return 0;
}

void oil(int x)
{
    using namespace std;

    int texas = 5;

    cout << "W funkjci oil() texas = " << texas << ", &texas = " << &texas << endl;
    cout << "W funkcji oil() x = " << x << ", &x = " << &x << endl;

    {
        int texas = 113;
        cout << "Wewnatrz bloku texas = " << texas << ", &texas = " << &texas << endl;
        cout << "Wewnatrz bloku x = " << x << ", &x = " << &x << endl;
    }
    cout << "Za blokiem texas = " << texas << ", &texas = " << &texas << endl;
}