#include <iostream>

using namespace std;

double warming = 0.3;   //definicja zmiennej warming

void update(double dt);
void local();

int main()
{

    cout << "Globalne ocieplenie wynosi " << warming << " stopni!.\n";
    update(0.1);
    cout << "Globalne ocieplenie wynosi " << warming << " stopni!.\n";
    local();
    cout << "Globalne ocieplenie wynosi " << warming << " stopni!.\n";
    return 0;
}
