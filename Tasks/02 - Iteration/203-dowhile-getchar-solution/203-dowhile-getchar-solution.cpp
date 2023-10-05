#include <stdio.h>

int main()
{
    puts("Press a letter or number, then press return");
    puts("Press q then return to quit");

    char userEnteredCharacter;
    char returnKey;
    bool proceed = true; // Proceed initialised as 0.

    do
    {
        userEnteredCharacter = getchar();   //ASCII character
        returnKey = getchar();              //Return key
        printf("You typed %c\n", userEnteredCharacter);
        printf("You also pressed return (ASCII %d)\n", returnKey);    //Uncomment this

        status = ((UserEnteredCharacter != "q") || (UserEnteredCharacter != "Q")); // If character is Q, then 0 (false) is returned.

    } while (status); // continues whilst proceed is true (1).

    puts("Finished");
}
