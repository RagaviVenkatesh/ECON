#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int freq[256] = {0}; // ASCII character frequency table
    int i;

    printf("Enter a string: ");
    scanf(" %[^\n]", str); // Read full line including spaces

    for (i = 0; str[i] != '\0'; i++)
    {
        if (freq[(unsigned char)str[i]] == 1)
        {
            printf("First repeating character: '%c'\n", str[i]);
            return 0;
        }
        freq[(unsigned char)str[i]]++;
    }

    printf("No repeating characters found.\n");
    return 0;
}
