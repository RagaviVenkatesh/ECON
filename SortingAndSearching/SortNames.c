#include <stdio.h>
#include <string.h>

#define SIZE 5
#define MAX_NAME_LEN 50

void sortNames(char names[SIZE][MAX_NAME_LEN], int ascending)
{
    char temp[MAX_NAME_LEN];

    for (int i = 0; i < SIZE - 1; i++)
    {
        for (int j = 0; j < SIZE - i - 1; j++)
        {
            int cmp = strcmp(names[j], names[j + 1]);
            if ((ascending && cmp > 0) || (!ascending && cmp < 0))
            {
                // Swap the strings
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }
}

void displayNames(char names[SIZE][MAX_NAME_LEN])
{
    for (int i = 0; i < SIZE; i++)
        printf("%s\n", names[i]);
}

int main()
{
    char names[SIZE][MAX_NAME_LEN];
    int choice;

    // Input names
    printf("Enter %d names:\n", SIZE);
    for (int i = 0; i < SIZE; i++)
    {
        printf("Name %d: ", i + 1);
        scanf("%s", names[i]); // Assumes no spaces in names
    }

    // Choose sorting order
    printf("\nChoose sorting order:\n");
    printf("1. Ascending (A-Z)\n");
    printf("2. Descending (Z-A)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1)
        sortNames(names, 1); // Ascending
    else if (choice == 2)
        sortNames(names, 0); // Descending
    else
    {
        printf("Invalid choice.\n");
        return 1;
    }

    // Display sorted names
    printf("\nSorted Names:\n");
    displayNames(names);

    return 0;
}
