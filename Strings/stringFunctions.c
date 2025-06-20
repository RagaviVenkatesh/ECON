#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100] = "Hello";
    char str2[100] = "World";
    char str3[100];
    char str4[100] = "lo";

    // strlen
    printf("Length of str1: %zu\n", strlen(str1));

    // strcpy
    strcpy(str3, str1);
    printf("After strcpy, str3: %s\n", str3);

    // strcat
    strcat(str1, str2);
    printf("After strcat, str1: %s\n", str1);

    // strcmp
    int cmp = strcmp(str2, str3);
    printf("strcmp(str2, str3): %d\n", cmp);

    // strchr
    char *ch = strchr(str1, 'W');
    if (ch)
    {
        printf("'W' found at position: %ld\n", ch - str1);
    }

    // strstr
    char *substr = strstr(str1, str4);
    if (substr)
    {
        printf("Substring \"%s\" found in \"%s\" at position: %ld\n", str4, str1, substr - str1);
    }

    return 0;
}
