#include <iostream>
#include <string>


int main()
{

    using std::cout;
    using std::cin;
    using std::endl;
    using std::string;

    string word = "?ate";

    for (char ch = 'a'; word != "mate"; ch++)
    {
        cout << word << endl;
        word[0] = ch;
    }
    cout << "Koniec petli, slowo to: " << word << endl;
    return 0;
}
