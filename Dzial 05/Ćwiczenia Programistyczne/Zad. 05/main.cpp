#include <iostream>


using namespace std;

int main()
{
    const int Months = 12;

    const char * months[Months] =
    {
        "Styczen",
        "Luty",
        "Marzec",
        "Kwiecien",
        "Maj",
        "Czerwiec",
        "Lipiec",
        "Sierpien",
        "Wrzesien",
        "Pazdziernik",
        "Listopad",
        "Grudzien"
    };

    int year;
    cout << "Za ile lat bedzie robione podsumowanie sprzedazy?: ";
    cin >> year;

    int sold[year][Months] = {};


    cout << "\nProgram zlicza miesieczna liczbe sprzedazy ksiazek. Aby go zakonczyc w dowolnym momencie i podsumowac aktualne dane wprowadz #\n\n";
    char x = 'z';



      if (x != '#')
      {

    for (int z = 0; z < 12 ;z++)
        {
            for(int Year = 0; Year < year; Year++)
            {

                 cout << "Wprowadz sprzedaz za " << months[z] << " " << Year+1 << " roku. ";

        cin >> sold[Year][z];
        x = sold[Year][z];

            }
        }



        int suma;
        cout << "\n\n\n";


        for (int z = 0; z < 12;z++)
        {
            for(int Year = 0; Year < year; Year++)
            {

                 cout << "Sprzedaz za " << months[z] << " " << Year+1 << " roku. \t";

        cout << sold[Year][z] << endl;
        suma += sold[Year][z];
        x = sold[Year][z];

            }
        }
        cout << "\nRoczna sprzedaz wyniosla: " << suma;
      }


      else if (x = '#')
      {
          return 0;
      }

    return 0;
}
