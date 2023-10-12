#include <stdio.h>

int main()
{
    // Outer loop 
    for (int i = 1; i <= 12; i++)        // Outer loop executes twice
    {
        printf("(%d)\n", i);

        // Inner loop
        for (int j = 1; j <= 12; j++)    // Inner loop executes 5 times for each outer loop run so 10 time in total
        {
            printf("\t%d x %d = %d\n", i,j,i*j);  // note the use of the tab (\t) option at the start to improve the layout
        }
    }


    int secretNumber = 22;

    switch (secretNumber)
    {
    case 0:
        puts("Not the secret number!");
        break;
    case 13:
        puts("Not the secret number!");
        break;
    case 23:
        puts("You found the secret number!");
        break;
    default:
        puts("The secret number is not here...");
        break;
    }



}