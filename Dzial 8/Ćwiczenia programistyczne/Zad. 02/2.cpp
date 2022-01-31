#include <iostream>

struct batonik
{
    const char* marka;
    double waga;
    int kalorie;
};

void change(batonik &x, const char* y, double z, int v);
void show(const batonik& x);


int main()
{
    batonik xxx = {};
    const char* yyy = "Siema";
    double zzz = 1.0;
    int vvv = 333;
    change(xxx,yyy,zzz,vvv);
    show(xxx);
    return 0;
}


void change(batonik& x, const char* y = "Millenium Munch", double z = 2.85, int v = 350)
{
    x.marka = y;
    x.waga = z;
    x.kalorie = v;
}

void show(const batonik& x)
{
    using namespace std;
    cout << x.marka <<"\n";
    cout << x.waga << "\n";
    cout << x.kalorie << "\n";
}