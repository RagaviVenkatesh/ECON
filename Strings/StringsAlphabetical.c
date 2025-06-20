#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    // Compare using strcmp
    if (strcmp(str1, str2) < 0)
    {
        printf("Alphabetical order:\n%s\n%s\n", str1, str2);
    }
    else if (strcmp(str1, str2) > 0)
    {
        printf("Alphabetical order:\n%s\n%s\n", str2, str1);
    }
    else
    {
        printf("Both strings are equal: %s\n", str1);
    }

    return 0;
}
