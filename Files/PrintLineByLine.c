#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char filename[100];
    char line[1000]; // Buffer to hold each line

    // Get the file name from user
    printf("Enter the file name: ");
    scanf("%s", filename);

    // Open the file for reading
    fp = fopen(filename, "r");
    if (fp == NULL)
    {
        perror("Error opening file");
        exit(1);
    }

    printf("\n--- File Contents ---\n");

    // Read and print each line
    while (fgets(line, sizeof(line), fp))
    {
        printf("%s", line);
    }

    // Close the file
    fclose(fp);

    return 0;
}
