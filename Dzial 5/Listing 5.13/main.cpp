#include <iostream>

const int ArSize = 20;

int main()
{

    using std::cin;
    using std::cout;
    using std::endl;

    char name[ArSize];

    cout << "Prosze podac swoje imie: ";
    cin >> name;
    cout << "Oto Twoje imie, ustawione pionowo, jako kody ASCII:\n";

    int i = 0;
    while (name[i] != '\0')
    {
        cout << name[i] << ": " << int (name[i]) << endl;
        i++;
    }

    return 0;
}
