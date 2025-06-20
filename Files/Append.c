#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fp;
    char filename[100];
    char line[1000];

    // Get the file name from the user
    printf("Enter the file name: ");
    scanf("%s", filename);

    // Flush newline from buffer before taking string input
    getchar();

    // Open file in append mode
    fp = fopen(filename, "a");
    if (fp == NULL)
    {
        perror("Error opening file");
        return 1;
    }

    // Get line of text to append
    printf("Enter a line to append: ");
    fgets(line, sizeof(line), stdin);

    // Optional: Remove trailing newline if needed
    if (line[strlen(line) - 1] == '\n')
    {
        line[strlen(line) - 1] = '\0';
    }

    // Write the line followed by a newline
    fprintf(fp, "%s\n", line);

    printf("Line appended successfully.\n");

    // Close the file
    fclose(fp);
    return 0;
}
