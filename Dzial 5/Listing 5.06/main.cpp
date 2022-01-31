#include <iostream>
#include <string>


int main()
{
    using std::cout;
    using std::cin;
    using std::endl;
    using std::string;

    cout << "Podaj slowo: ";
    string word;
    cin >> word;

    for (int i = word.size() - 1; i >= 0; i--)
        {
            cout << word[i];
        }
    cout << "\nDo widzenia.\n";
    return 0;
}
