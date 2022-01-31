#include <iostream>
#include <string>
#include <climits>
int main()
{
    using namespace std;

    cout << "Podstawowe typy: "<<endl<<endl;
    cout << "Zmienna typu char zajmuje: "<< sizeof(char)<<" bajtow"<<endl;
    cout << "Zmienna typu int zajmuje: "<< sizeof(int)<<" bajtow"<<endl;
    cout << "Zmienna typu float zajmuje: "<< sizeof(float)<<" bajtow"<<endl;
    cout << "Zmienna typu double zajmuje: "<< sizeof(double)<<" bajtow"<<endl;
    cout << "Zmienna typu bool zajmuje: "<< sizeof(bool)<<" bajtow"<<endl;
    cout << "Zmienna typu string zajmuje: "<< sizeof(string)<<" bajtow"<<endl<<endl;

    char maxchar = CHAR_MAX;
    int maxint = INT_MAX;
    float maxfloat = size_t

    cout << "Zmienna typu char = " << maxchar <<endl;
    cout << "Zmienna typu int = " << maxint <<endl;
    cout << "Zmienna typu float = " << maxfloat <<endl;

    char zmiennachar = '$';
    int zmiennaint = 55;
    float zmiennafloat = 5.5;
    double zmiennadouble = 5.55555;
    bool zmiennabool = true;
    string s1 = "dzem";

    cout << "Wyswietlanie: " << endl<<endl;

    cout << "char = " << zmiennachar << endl;
    cout << "int = " << zmiennaint << endl;
    cout << "float = " << zmiennafloat << endl;
    cout << "double = " << zmiennadouble << endl;
    cout << "bool = " << zmiennabool << endl;
    cout << "string s1 = " << s1 << endl<<endl;



    return 0;
}
