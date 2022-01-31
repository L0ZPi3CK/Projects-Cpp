#include <iostream>



int main()
{

    using std::cout;
    using std::cin;
    using std::endl;

    int scores[10] = { 20, 20, 20, 20, 20, 19, 20, 18, 20, 20};

    cout << "Bezblendnie:\n";

    int i;
    for (i = 0; scores[i] == 20; i++)
        cout << "test " << i << " ma wartosc 20\n";

    return 0;
}
