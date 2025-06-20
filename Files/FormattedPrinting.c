#include <stdio.h>

int main()
{
    FILE *fp = fopen("data.txt", "w");

    if (fp == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    int id = 192;
    char name[] = "John Doe";
    float score = 88.5;

    // Formatted printing to file
    fprintf(fp, "ID: %d\n", id);
    fprintf(fp, "Name: %s\n", name);
    fprintf(fp, "Score: %.2f\n", score);

    fclose(fp);
    printf("Data written to file successfully.\n");

    return 0;
}
