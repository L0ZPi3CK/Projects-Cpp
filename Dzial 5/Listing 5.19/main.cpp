#include <iostream>



int main(void)
{

    using namespace std;

    int ch;
    int count = 0;

    while ((ch = cin.get()) != 'E0F')
    {
        cout.put(char(ch));
        ++count;
    }

    cout << "\nWczytano " << count << " znakow." << endl;
    return 0;
}
