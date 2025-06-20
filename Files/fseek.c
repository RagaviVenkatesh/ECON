#include <stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("example.txt", "r");

    if (fp == NULL)
    {
        perror("Error opening file");
        return 1;
    }

    // Move file pointer to 198th byte from the beginning
    fseek(fp, 198, SEEK_SET);

    // Read and print from there
    int ch;
    while ((ch = fgetc(fp)) != EOF)
    {
        putchar(ch);
    }

    fclose(fp);
    return 0;
}
