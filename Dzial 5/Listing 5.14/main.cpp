#include <iostream>
#include <ctime>



int main()
{

    using namespace std;

    cout << "Podaj ile czasu opoznienia: ";
    float secs = 5;

    //cin >> secs;

    clock_t delay = secs * CLOCKS_PER_SEC;
    cout << "Zaczynac\a\n";

    clock_t start = clock();
    while(clock() - start < delay )
            ;

    cout << "Done" << endl;
    return 0;
}
