#include <iostream>
#include <string>
#include <memory>

int main()
{
    using namespace std;

    auto_ptr<string> films[5]
    {
        auto_ptr<string> (new string("Sowki, sowki")),
        auto_ptr<string> (new string("Gadajaca kaczka")),
        auto_ptr<string> (new string("Wyscig kurczakow")),
        auto_ptr<string> (new string("Kozi syn")),
        auto_ptr<string> (new string("Kukulcze jaja")),
    };

    auto_ptr<string> pwin;
    pwin = films[2];        // !!! In this case shared_ptr should be used instead of auto_ptr
    cout << "Nominowani w kategorii najlepszego filmu przyrodniczego sa:\n";

    for (int i = 0; i < 5; i++)
        cout << *films[i] << endl;
    cout << "A zwyciezca jest " << *pwin << endl;
    cin.get();
    return 0;
}
