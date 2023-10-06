#include <stdio.h>

int main()
{
    //Counter variable
    int i;


    //For loop (pre-C99 standard)
    for (i = 0; i < 5; i++)
    {
        //Perform code tasks
        printf("i=%d\n", i);
    }

    // TASK A - count from 10 down to 0 in steps of -1

    for (int a = 10; a >= 0; a -= 1) //Start from 10 and loop whilst a >= 0.
    {
        printf("a = %d \n", a);
    }

    // TASK B - count from 10 down to -10 in steps of -2

    for (int b = 10; b >= -10; b -= 2) //Starts from 10, continues whilst b >= -10
    {
        printf("b = %d \n", b);
    }

    // TASK C - count from 10 to 200 in steps of 10

    for (int c = 10; c <= 200; c += 10)
    {
        printf("c = %d \n", c);
    }

    // TASK D - count from -10 down to 20 in steps of 5

    for (int d = -10; d <= 20; d += 5)
    {
        printf("d = %d \n", d);
    }

    // TASK E - can you predict the largest value of i that is displayed?
    for (i = 0; i < 12; i += 3)
    {
        //Perform code tasks
        printf("i=%d \n", i);

        //OUTPUT: 0, 3, 6, 9 - so the answer is 9.
    }
}