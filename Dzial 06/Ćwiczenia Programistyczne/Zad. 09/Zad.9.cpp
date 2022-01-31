#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <cstdlib>
#include <cstring>


using namespace std;
struct wplacajacy
{
    string nazwisko;
    double kwota = 0;
};

int main()
{ 

    // zapis do pliku
    string dane;    
    ofstream outFile;
    outFile.open("file.txt");
    cout << "Podaj dane do pliku('-+' konczy wprowadzanie):  ";
    cout << "\n1. Wartosc - liczba sposorow [enter]";
    cout << "\n2. Wartosc - Sponsor[enter]";
    cout << "\n3. Wartosc - Wplata[enter]";
    cout << "\n4. Krok 2 i 3 powtorzyc n razy.\n";
    getline(cin, dane,'+');
    outFile << dane;
    outFile.close();

    //odczyt z pliku
    ifstream inFile;
    string dane2;
    inFile.open("file.txt");
    if (!inFile.is_open())
    {
        cout << "Otwarcie pliku nie powiodlo sie!";
        cout << "\nProgram zostanie zakonczony.\n";
        exit(EXIT_FAILURE);
    }    
    getline(inFile, dane2, '+');
    inFile.close();

    //cout << "Cale dane2: !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! = " <<dane2;    //wyświetla dane2 zgadza sie


    int licznik;
    int n = atoi(dane2.c_str());    // JAK TO DZIALA???? Ale dziala..
    licznik = n;
    wplacajacy* osoba = new wplacajacy[n];
    
    //cout << "Zmienna n = " << n;  //wyswietla tyle ile powinna czyli pierwsza wprowadzona dana

    int sn = dane2.length();
    cout << "Oto dane2[1] = " << dane2[1];
    //cout << "Oto dane2[2] = " << dane2[2];    //dane2[2] to 1 litera wprowadzonego imienia zgadza sie

    int q = 2;
    for (int i = 0; i < n; i++)
    {
        while(dane2[q] != '-')
        {            
        if (dane2[q] == NULL || dane2[q] == ' ' || dane2[q] == dane2[1])    // 
        {
            cout << "Pierwszy if (NULL)" << endl;
            q++;
        }
        else if ((dane2[q] >= 'a') && (dane2[q] <= 'z') || (dane2[q] >= 'A') && (dane2[q] <= 'Z'))
        {            
            //string czlonek;   //string nie dziala xD BEEEKA
            int cz = 0;
            char* czlonek = new char[cz];
            while ((dane2[q] >= 'a') && (dane2[q] <= 'z') || (dane2[q] >= 'A') && (dane2[q] <= 'Z'))
            {
                czlonek[cz] = dane2[q];
                q++;
                cz++;
                //cout << osoba[i].nazwisko;
            }
            cout << "oto dlugosc cz: " << cz;
            cout << "\tOTO CZLONEK: " << czlonek << endl;
            osoba[i].nazwisko = czlonek;
            
        }
        else if ((dane2[q] >= '0') && (dane2[q] <= '9'))
        {            
            //string pieniandz;
            int p = 0;
            char* pieniandz = new char[p];
            while ((dane2[q] >= '0') && (dane2[q] <= '9'))
            {
                pieniandz[p] = dane2[q];
                p++;                
                q++;
                //cout << osoba[i].kwota;
            }
            cout << "Oto dlugosc p: " << p;
            cout << "\tOTO PIENIANDZ: " << pieniandz << endl;
            osoba[i].kwota = atof(pieniandz);
            if (dane2[q] == NULL || dane2[q] == ' ' || dane2[q] == dane2[1])
            {
                break;
            }
        }
        else
        {
            cout << "Oto arr[q] = " << dane2[q];
            cout << "Co sie dzieje O:O?" << endl;
            q++;
        }

        }       
    }


    int z = 0;
    cout << "\nNasi Najwspanialszy Sponsorzy:\n";
    for (int i = 0; i < n; i++)
    {
        if (osoba[i].kwota >= 10000)
        {

            cout << osoba[i].nazwisko << " z kwota: " << osoba[i].kwota << endl;
            licznik--;
        }
        if (z == 0)
        {
            cout << "\nNasi wspaniali sponsorzy:\n";
            z++;
        }
        else if (osoba[i].kwota < 10000 && osoba[i].kwota > 0)
        {
            cout << osoba[i].nazwisko << " z kwota: " << osoba[i].kwota << endl;
            licznik--;
        }
    }
    for (int i = 0; i < licznik; i++)
    {
        cout << "---Brak---" << endl;
    }
    
}
