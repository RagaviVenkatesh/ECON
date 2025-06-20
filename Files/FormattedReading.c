#include <stdio.h>

int main()
{
    FILE *fp = fopen("data.txt", "r");

    if (fp == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    int id;
    char name[50];
    float score;

    // Read formatted data
    fscanf(fp, "ID: %d\n", &id);
    fscanf(fp, "Name: %[^\n]\n", name);
    fscanf(fp, "Score: %f\n", &score);

    fclose(fp);

    printf("Data read from file:\n");
    printf("ID: %d\n", id);
    printf("Name: %s\n", name);
    printf("Score: %.2f\n", score);

    return 0;
}
