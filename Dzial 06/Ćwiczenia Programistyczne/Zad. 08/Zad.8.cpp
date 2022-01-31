#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

int main()
{
    using namespace std;
    string dane;

    ofstream outFile;
    outFile.open("file.txt");


    cout << "Podaj dane do pliku: ";
    getline(cin,dane);
    //outFile << fixed;
    //outFile.precision(2);
    //outFile.setf(ios_base::showpoint);
    outFile << dane;
    outFile.close();

    ifstream inFile;
    inFile.open("file.txt");
    if (!inFile.is_open())
    {
        cout << "Otwarcie pliku nie powiodlo sie!";
        cout << "\nProgram zostanie zakonczony.\n";
        exit(EXIT_FAILURE);
    }

    string dane2;
    getline(inFile, dane2);
    int l = 0;
    for (int i = 0;; i++)
    {        
        if (dane2[i] == NULL)
        {
            break;
        }
        else
        {
            cout << dane2[i];
            if (!isspace(dane2[i]))
            {
                l ++ ;
            }
        }        
    }
    cout << "\nLiczba znakow: " << l;
}