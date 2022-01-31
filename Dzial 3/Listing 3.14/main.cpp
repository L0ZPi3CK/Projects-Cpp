#include <iostream>


int main()
{
    using namespace std;
    int auks, bats, coots;

    // poni¿sza instrukcja dodaje wartoœci jako typ double
    // nastêpnie konwertuje wynik na int
    auks = 19.99 + 11.99;

    // te instrukcje dodaj¹ wartoœci jako typ int
    bats = (int) 19.99 + (int) 11.99;   // stara sk³adnia C
    coots = int (19.99) + int (11.99);  // nowa sk³adnia C++
    cout << "auks = " << auks << ", bats = " << bats << ",coots = " << coots << endl;

    char ch = 'Z';
    cout << "Kod odpowiadajacy znakowi " << ch << " to ";           // poka¿ jako char
    cout << int (ch) << endl;                                       // poka¿ jako int
    cout << "Tak, ten kod to " << static_cast<int>(ch) << endl;     // z u¿yciem static_cast





    return 0;
}
