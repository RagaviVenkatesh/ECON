#include <stdio.h>
#include <string.h>

// This program demonstrates the use of a do-while loop to repeatedly ask for a password
// until the correct one is entered. The correct password is "CProgram123".
int main()
{
    char password[20];

    // Keep asking until the correct password is entered
    do
    {
        printf("Enter the password: ");
        scanf("%s", password);
    } while (strcmp(password, "CProgram123") != 0);

    // strcmp compares two strings and returns 0 if they are equal
    //  If the password is correct, it exits the loop and prints a success message
    printf("Access Granted!\n");

    return 0;
}
