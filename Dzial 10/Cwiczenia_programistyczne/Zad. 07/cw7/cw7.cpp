#include <iostream>
#include "nag.h"

int main()
{
    std::cout << "Hello! Stworzmy plorga!!!\n";
    Plorg adam("adam", 22);

    adam.szamanko(97);
    adam.say();
}
