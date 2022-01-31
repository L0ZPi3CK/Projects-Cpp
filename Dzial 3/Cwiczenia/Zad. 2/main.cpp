#include <iostream>



int main()
{
    using namespace std;
    double stopy, cale, funty, metry, wzrost, kilogramy, bmi;
    const double x = 12;
    const double y = 0.0254;
    const double z = 2.2;
    cout << "Podaj swoj wzrost w stopach ";
    cin >> stopy;
    cout << "Podaj swoj wzrost w calach ";
    cin >> cale;
    wzrost = stopy * x + cale;
    metry = wzrost * y;
    cout << "Podaj swoja wage w funtach ";
    cin >> funty;
    kilogramy = funty / z;
    bmi = kilogramy / (metry*metry);
    cout << "Twoje BMI wynosi " << bmi << endl;



    return 0;
}
