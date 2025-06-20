#include <stdio.h>

int main()
{
    FILE *fp;

    // Open file in write mode
    fp = fopen("sample.txt", "w");

    // Check if file opened successfully
    if (fp == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    // Write a line to the file
    fprintf(fp, "Hello from C file I/O!\n");

    // Close the file
    fclose(fp);

    printf("File written and closed successfully.\n");

    return 0;
}
