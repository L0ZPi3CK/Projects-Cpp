#include <iostream>

int fill_array(double arr[10]);
void show_aray(double arr[10]);
void reverse_array(double arr[10], int liczba);

int main()
{
    double arr[10];
    int liczba = 0;
    liczba = fill_array(arr);
    show_aray(arr);
    reverse_array(arr, liczba);
    show_aray(arr);
    std::cout << "Liczba poprwanie wprowadzonych liczb: " << liczba;

}

int fill_array(double arr[10])
{
    int n = 0;
        while (n < 10)
        {
            if (!arr[n-1])
            {
                return n-1;
            }
            std::cout << "Podaj " << n + 1 << " liczbe: ";
            std::cin >> arr[n];
            n++;
            // Zobaczymy czy !fill_array poradzi sobie z przepelnieniem tablicy
        }
        return n;
}

void show_aray(double arr[10])
{
    int n = 0;
    while (n < 10)
    {
        if (!arr[n])
        {
            std::cout << "Kolejna wartosc nie jest poprwawna!" << std::endl;
            break;
        }
        std::cout << "arr[" << n+1 << "] = " << arr[n] << std::endl;
        n++;
    }
    //std::cout << "\t\tKoniec SHOW********"<< std::endl;
}

void reverse_array(double arr[10], int liczba)
{
    int n = 0, y = 0;
    while (n < liczba)
    {
        if (!arr[n])
        {
            std::cout << "Kolejna wartosc nie jest poprwawna!" << std::endl;
            break;
        }
        y = arr[n];
        arr[n] = arr[liczba-1];
        arr[liczba-1] = y;
        n++;
        liczba--;
    }
    std::cout << "!Odwrocono!" << std::endl;
}