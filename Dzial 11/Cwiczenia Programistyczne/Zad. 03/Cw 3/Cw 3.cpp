#include <iostream>
#include <fstream>      // odanie fstream dla uzyskania wykazu krokow
#include <cstdlib>
#include <ctime>
#include "vect.h"

int main()
{
    using namespace std;
    using VECTOR::Vector;
    srand(time(0));         //inicjalizacja generalna liczb pseudolosowych

    ofstream fout;
    fout.open("marsz.txt");

    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    
    unsigned long steps = 0;
    double target;
    double dstep;
    int attempt;
    cout << "Podaj dystans do przejscia (k, aby zakonczyc): ";
    while (cin >> target)
    {
        cout << "Podaj dlugosc kroku: ";

        if (!(cin >> dstep))
            break;
        cout << "Podaj ilosc prob: ";
        cin >> attempt;
        double* attempts = new double[attempt];

        for (int i = 0; i < attempt; i++)
        {
            while (result.magval() < target)
            {
                direction = rand() % 360;
                step.reset(dstep, direction, Vector::POL);
                result = result + step;
                fout << steps << ": " << result << endl;
                steps++;
            }
            attempts[i] = steps;
        

        cout << "Po " << steps - 1 << " krokach delikwent osiagnal polozenie: " << result << endl;
        fout << "Po " << steps - 1 << " krokach delikwent osiagnal polozenie: " << result << endl;
        result.polar_mode();
        cout << "czyli\n" << result << endl;
        fout << "czyli\n" << result << endl;
        cout << "Srednia dlugosc kroku pozornego = " << result.magval() / steps << endl;
        fout << "Srednia dlugosc kroku pozornego = " << result.magval() / steps << endl;
        steps = 0;
        result.reset(0.0, 0.0);
        }
        for (int i = 1; i < attempt; i++)
        {
            attempts[0] += attempts[i];
        }

        cout << "Srednia ilosc krokow przy " << attempt << " powtorzeniach wynosi: " << attempts[0]/attempt << endl;
        fout << "Srednia ilosc krokow przy " << attempt << " powtorzeniach wynosi: " << attempts[0] / attempt << endl;
        cout << "Podaj dystans do przejscia (k, aby zakonczyc): ";
    }
    cout << "Koniec!\n";
    cin.clear();
    while (cin.get() != '\n')
        continue;
    return 0;


}