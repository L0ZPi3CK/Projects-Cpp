#include <iostream>
#include "nag.h"

int main()
{
    Person one = Person(); // Czemu niejawne wywolanie nie dzialalo?? --> Person one;
    Person two("Staszek");
    Person three("Jacek", "Placek");
    
    one.Show();
    one.FormalShow();

    std::cout << std::endl;

    two.Show();    
    two.FormalShow();

    std::cout << std::endl;

    three.Show();    
    three.FormalShow();

}

