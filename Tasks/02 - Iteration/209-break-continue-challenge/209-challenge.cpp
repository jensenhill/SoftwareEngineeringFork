#include <stdio.h>

int main()
{
    bool quitEarly = false;
    int count = 0;
    for (;;)
    {
        char c = getchar(); //Read character
        char _ = getchar(); //Read and discard newline (nice little hack :)
        if ((c == 'q') || (c == 'Q'))
        {
            printf("\tUser stopped the loop early at %d\n", count);
            quitEarly = true;       //Flag that indicated the loop was exited
            break;                  // break out of the for loop
        }
        else
        {
            count += 1;
        }
        printf("Loop counter = %d\n", count);
    }

    //Was the loop exited with a break?
    if (quitEarly == true) {
        puts("The loop was exited early");
    }

    puts("Done");
}
