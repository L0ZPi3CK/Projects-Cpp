#include <iostream>


int main()
{
    char ch;
    std::cout << "Pisz a bede powtarzac.\n";
    std::cin.get(ch);

    while (ch != '.')
    {
        if (ch == '\n')
            std::cout << ch;
        else
            std::cout << ch+1;
        std::cin.get(ch);

    }

    std::cout << "Wybacz niedociagniecia";
}
