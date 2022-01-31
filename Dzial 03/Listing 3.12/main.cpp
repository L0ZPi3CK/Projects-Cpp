#include <iostream>



int main()
{
    using namespace std;
    const int Lbs_per_stn = 14;
    int lbs;

    cout << "Podaj soja wage w funtach: ";
    cin >> lbs;
    int stone = lbs / Lbs_per_stn;      // calych kamieni
    int pounds = lbs % Lbs_per_stn;     // reszta w funtach
    cout << lbs << " funtow to " << stone << " kamieni, " << pounds << " funt(ow).\n";

    return 0;
}
