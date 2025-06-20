#include <stdio.h>

int main()
{
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    scanf("%s", str); // Use scanf to read a word (no spaces)

    // Loop until null character '\0' is found
    while (str[length] != '\0')
    {
        length++;
    }

    printf("Length of the string is: %d\n", length);
    return 0;
}
