#include <stdio.h>

int main()
{

    //https://github.com/UniversityOfPlymouthComputing/SoftwareEngineering/blob/main/docs/level4/variables_and_arithmetic.md#writing-to-the-console-with-cout-c:~:text=Reading%20from%20the%20console%20with%20getchar%20(read%20a%20character)


    
    // ************************ Using puts ******************************** 
    puts("Hello World!");   //Write Hello World to the terminal


    // ************************ Using printf ******************************* 
    printf("Hello Everyone. \nWe are using C\nHow are things?");
    // TASK (a) - remove \n from the string above - what does this change? 

        // This leaves the text on the same line at output.

    // ******************* Using printf placeholders *********************** 
    int age = 23;
    printf("My age is %d\n", age);

    // Some other placeholders include %c for character and %f for floating point
    float radius = 10.0f;
    float area = 3.415926 * radius * radius;

    // TASK(b) - Use printf to display the value of the variable area. Look at the lecture slides and find out how to limit this to 3 decimal places
    // Write solution here
    
    printf("Area = %.3f\n", area);

    // You can output complex strings to the terminal
    int p = 3;
    int q = 4;
    printf("p=%d, q=%d\n", p, q);

    // TASK(c) - using printf, display the radius and the area using a single printf statement
    // Write solution here

    printf("Radius is %.3f, Area is %.3f.", radius, area);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

