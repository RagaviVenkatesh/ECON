#include <stdio.h>

int main()
{
    char name1[50], name2[50];

    // Using scanf (reads until first space)
    printf("Enter your first name (using scanf): ");
    scanf("%s", name1);

    // To clear input buffer (important before using gets)
    getchar(); // Consumes the newline character left by scanf

    // Using gets (reads until newline)
    printf("Enter your full name (using gets): ");
    gets(name2); // Note: gets is unsafe, use fgets instead in real-world programs

    // Output both names
    printf("Name with scanf: %s\n", name1);
    printf("Name with gets: %s\n", name2);

    return 0;
}
