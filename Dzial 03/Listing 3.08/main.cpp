#include <iostream>

int main()
{
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield);       // stałoprzecinkowy
    float tub = 10.0 / 3.0;                                 // dokładność do ok. 6 cyfr
    double mint = 10.0 / 3.0;                               // dokładność do ok. 15 cyfr
    const float million = 1.0e6;

    cout << "tub = " << tub;
    cout << ", a milion razy tub = " << million * tub;
    cout << ",\na dziesiec milionow razy tub = ";
    cout << 10 * million * tub << endl;

    cout << "mint = " << mint << ", a milion razy mint = ";
    cout << million * mint << endl;
    return 0;
}
