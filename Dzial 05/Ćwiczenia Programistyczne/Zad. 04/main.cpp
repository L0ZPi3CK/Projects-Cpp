#include <iostream>

using namespace std;

int main()
{

    int D = 100;
    int C = 100;
    int t = 1;
    do
    {
        D += (0.10 * 100);

        C += (0.05 * C);
        t++;
    } while (C < D);


    cout << "Daffne zarobila: " << D << " zloty\nA Cleo zarobila: " << C << " zloty\nPo czasie: " << t << " lat";
    return 0;
}
