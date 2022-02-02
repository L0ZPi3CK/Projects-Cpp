#include <iostream>

const int ArSize = 8;
int sum_arr(int arr[], int n);

int main()
{
    int cookies[ArSize] = { 1,2,4,8,16,32,64,128 };
    
    std::cout << cookies << " = adres tablicy, ";
    std::cout << sizeof cookies << " = sizeof cookies\n";
    int sum = sum_arr(cookies, ArSize);
    std::cout << "Zjedzono ciasteczek: " << sum << std::endl;
    sum = sum_arr(cookies, 3);
    std::cout << "Pierwsze trzy osoby zjadly " << sum << " ciastek.\n";
    sum = sum_arr(cookies + 4, 4);
    std::cout << "Ostatnich czworo zjadlo: " << sum << " ciastek.\n";
    return 0;
}

int sum_arr(int arr[], int n)
{
    int total = 0;
    std::cout << arr << " = arr, ";
    std::cout << sizeof arr << " = sizeof arr\n";
    for (int i = 0; i < n; i++)
        total = total + arr[i];
    return total;
}