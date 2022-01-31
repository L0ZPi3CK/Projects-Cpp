#include <iostream>

using namespace std;
void strtoupper(string &napis);

int main()
{
    string napis;
    for (;;)
    {
        cout << "Podaj lancuch (q aby zakonczyc):";
        cin >> napis;
        if (napis[0] == 'q' && napis[1] == '\0')
            break;
        strtoupper(napis);
    }
    return 0;
}

void strtoupper(string& napis)
{
    for (int l = 0; napis[l] != '\0'; l++)
    {
        napis[l] = toupper(napis[l]);  
    }
    std::cout << napis << endl;

}