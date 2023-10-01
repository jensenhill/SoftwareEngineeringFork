#include <stdio.h>

int main()
{
    //Create a variable x
    int x = 0;

    //Prompt user
    printf("Enter your age\n");

    //Read keyboard response - look for an integer
    int found = scanf_s("%d", &x);

    //Display how many items were matched
    printf("Matched %d items\n", found);

    //Display what was typed in
    printf("x = %d\n", x);

    //TASK - Modify the code to read in an additional number and display it on the screen.

    //Create a variable
    int additionalNumber = 0;

    //Prompt user
    printf("Enter an additional number:");

    //Read keyboard response for integer
    //Scan the input for type "%d" (integer) and store as (in memory address of) additionalNumber. Passing by reference.
    int additionalFound = scanf_s("%d", &additionalNumber);

    //Check if the input was an integer
    if (additionalFound == 0) {
        //Output error message
        puts("The input was not a valid integer.");
    }
    else {
        //Display number on screen
        printf("The number you entered was %d", additionalNumber);
        //Display the average
        printf("The average of both numbers was %d", ((x + additionalNumber) / 2));
    }



}


