#include <stdio.h>

int main()
{
    FILE *fp = fopen("example.txt", "w+"); // Open for read/write
    if (fp == NULL)
    {
        printf("Unable to open file.\n");
        return 1;
    }

    fputs("Hello, World!", fp); // Write to file

    long pos = ftell(fp); // Get current position
    printf("Current file pointer position: %ld bytes\n", pos);

    rewind(fp); // Move pointer to beginning

    pos = ftell(fp); // Check again
    printf("After rewind, file pointer position: %ld bytes\n", pos);

    fclose(fp);
    return 0;
}

// This program demonstrates how to use ftell() to get the current position of the file pointer in a file.
// It opens a file in read/write mode, writes a string to it, and then uses ftell() to retrieve the current position of the file pointer.
// After that, it rewinds the file pointer back to the beginning using rewind() and checks the position again with ftell().
// The output shows the byte position of the file pointer before and after the rewind operation.