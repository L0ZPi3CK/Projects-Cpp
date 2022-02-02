#include <iostream>

unsigned int c_in_str(const char* str, char ch);

int main()
{
    using namespace std;
    char mmm[15] = "minimum";   // lancuch w tablicy

    char *wail = mmm;     // wail wskazuje na lanuch znakowy

    unsigned int ms = c_in_str(mmm, 'm');
    unsigned int us = c_in_str(wail, 'u');
    cout << ms << " znakow m w " << mmm << endl;
    cout << us << " znakow u w " << wail << endl;
    return 0;
}

unsigned int c_in_str(const char* str, char ch)
{
    unsigned int count = 0;

    while (*str)
    {
        if (*str == ch)
            count++;
        str++;
    }
    return count;
}