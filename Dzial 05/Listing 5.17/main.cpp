#include <iostream>



int main()
{

    using namespace std;

    char ch;
    int count = 0;

    cout << "Podawaj znaki; znak # konczy: \n";
    cin.get(ch);

    while (ch != '#')
    {
        cout << ch;
        ++count;
        cin.get(ch);
    }
    cout << "\nWczytano " << count << " znakow." << endl;
    return 0;
}
