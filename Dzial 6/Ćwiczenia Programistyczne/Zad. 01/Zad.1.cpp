#include <iostream>
#include <climits>

int main()
{
    using namespace std;
    char ch;
        
    cout << "Wpisz cos(@ zakoncza wczytywanie): ";
    cin.get(ch);

    while (ch != '@')
    {
        if (isalpha(ch))
        {
            if (islower(ch))
            {
                cout << (char)(ch - 32);
            }
            else
            {
                cout << (char)(ch + 32);
            }            
        }
        cin.get(ch);
    }
}