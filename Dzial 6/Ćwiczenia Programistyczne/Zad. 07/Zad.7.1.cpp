#include <iostream>
#include <climits>

int main()
{
    using namespace std;
    char ch;
    int samogloski = 0, spolgloski = 0, inne = 0;

    cout << "Wpisz cos(q zakoncza wczytywanie): ";
    cin.get(ch);    

    while (ch != 'q')
    {
        if (isalpha(ch))
        {
            if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U' || ch == 'y' || ch == 'Y')
            {
                samogloski++;
                while (isspace(ch) == 0)
                {
                    //cout << ch;
                    cin.get(ch);
                    if (ch == 'q')
                    {
                        break;
                    }
                }
                if (ch == 'q')
                {
                    break;
                }
                cin.get(ch);
                //cout << "1";
            }
            else
            {
                spolgloski++;
                while (isspace(ch) == 0)
                {
                    //cout << ch;
                    cin.get(ch);
                    if (ch == 'q')
                    {
                        break;
                    }
                }
                if (ch == 'q')
                {
                    break;
                }
                cin.get(ch);
                //cout << "2";
            }
        }
        else
        {
            inne++;
            while (isspace(ch) == 0)
            {
                //cout << ch;
                cin.get(ch);
                if (ch == 'q')
                {
                    break;
                }
            }
            if (ch == 'q')
            {
                break;
            }
            cin.get(ch);
            //cout << "3";
        }
    }
    cout << "Wyrazy zaczynajace sie na samogloski: " << samogloski << "\nWyrazy zaczynajace sie na spolgloski: " << spolgloski << "\nInne: " << inne;
}