#include <iostream>



int main()
{
    using namespace std;
    cout << "W ktorym roku zbudowano twoj dom?\n";
    int years;
    cin >> years;
    cin.get();
    cout << "Przy jakiej ulicy mieszkasz?\n";
    char address[80];
    cin.getline(address, 80);
    cout << "Rok budowy: " << years << endl;
    cout << "Adres: " << address << endl;
    cout << "Gotowe!\n";


    return 0;
}
