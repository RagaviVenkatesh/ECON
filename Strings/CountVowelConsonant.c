#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100];
    int vowels = 0, consonants = 0;
    int i = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str); // Read full line including spaces

    while (str[i] != '\0')
    {
        char ch = tolower(str[i]);

        if (ch >= 'a' && ch <= 'z')
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }

        i++;
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
