﻿#include <iostream>
#include "stonewt1.h"

int main()
{
    using std::cout;
    Stonewt poppins(9, 2.8);    // 9 kamieni, 2.8 funta
    double p_wt = poppins;      // konwersja niejawna
    cout << "Konwersja na typ double => Poppins: " << p_wt << " funtow.\n";
    cout << "Konwersja na typ int => Poppins: " << int(poppins) << " funtow\n";
    return 0;
}