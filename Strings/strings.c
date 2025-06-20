#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100], str3[100], str4[100];
    int i = 0;
    char ch;

    // Method 1: scanf("%s")
    printf("Method 1 - scanf(\"%%s\"): Enter a word: ");
    scanf("%s", str1);
    getchar(); // To consume leftover newline from input buffer

    // Method 2: fgets()
    printf("Method 2 - fgets(): Enter a line (with spaces): ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; // Remove newline character

    // Method 3: scanf(" %[^\n]")
    printf("Method 3 - scanf(\" %%[^\n]\"): Enter another line: ");
    scanf(" %[^\n]", str3);
    getchar(); // Clear buffer

    // Method 4: getchar() loop
    printf("Method 4 - getchar() loop: Enter characters (end with newline): ");
    while ((ch = getchar()) != '\n' && i < 99)
    {
        str4[i++] = ch;
    }
    str4[i] = '\0';

    // Output results
    printf("\n--- Results ---\n");
    printf("String 1 (scanf): %s\n", str1);
    printf("String 2 (fgets): %s\n", str2);
    printf("String 3 (scanf with [^\\n]): %s\n", str3);
    printf("String 4 (getchar loop): %s\n", str4);

    return 0;
}
