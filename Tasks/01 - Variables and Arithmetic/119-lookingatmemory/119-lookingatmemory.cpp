// lookingatmemory.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    
    unsigned int number = 10;
    printf("The HEX value of 10 is \"%x\"", number);
    printf("\nThe HEX value is stored at %p", &number);

    return 0;

}


