#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100], ch;
    int i, count = 0;

    printf("Enter a string: ");
    scanf(" %[^\n]", str); // Read full line including spaces

    printf("Enter the character to find frequency: ");
    scanf(" %c", &ch); // Note space before %c to skip newline

    for (i = 0; str[i] != '\0'; i++)
    {
        if (tolower(str[i]) == tolower(ch))
        {
            count++;
        }
    }

    printf("The frequency of '%c' in the string is: %d\n", ch, count);

    return 0;
}
