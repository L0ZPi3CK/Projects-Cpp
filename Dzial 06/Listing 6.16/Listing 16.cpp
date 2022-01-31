#include <iostream>
#include <fstream>
#include <cstdlib>

const int SIZE = 60;

int main()
{
    using namespace std;
    char filename[SIZE];
    ifstream inFile;            //obiekt obslugujacy odczyt z pliku

    cout << "Podaj nazwe pliku z danymi: ";
    cin.getline(filename, SIZE);
    inFile.open(filename);

    if (!inFile.is_open())
    {
        cout << "Otwarcie pliku " << filename << " nie powiodlo sie.\n";
        cout << "Program zostanie zakonczony.\n";
        exit(EXIT_FAILURE);
    }
    double value;
    double sum = 0.0;
    int count = 0;          //liczba elementow do odczytu

    inFile >> value;        //Pobierz pierwsza wartosc
    while (inFile.good())   //poki dobre dane i nie EOF
    {
        ++count;            //wczytywano kolejna dana
        sum += value;       //oblicznie bierzacej sumy
        inFile >> value;    //pobranie nastepnej wartosci
    }

    if (inFile.eof())
        cout << "Koniec pliku.\n";
    else if (inFile.fail())
        cout << "Wczytywanie danych przerwane - blad.\n";
    else
        cout << "Wczytywanie danych przerwane, przyczyna nieznana.\n";
    if (count == 0)
        cout << "Nie przetworzono żadnych danych.\n";
    else
    {
        cout << "Wczytanych elementow: " << count << endl;
        cout << "Suma: " << sum << endl;
        cout << "Srednia: " << sum / count << endl;
    }
    inFile.close();
    return 0;
}

