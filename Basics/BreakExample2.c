#include <stdio.h>

// This program demonstrates the use of a for loop to find the first multiple of 7
// in an array of integers. It uses a break statement to exit the loop once the first
// multiple is found, and it also checks if no multiples were found after the loop completes.
int main()
{
    int numbers[] = {4, 8, 15, 22, 29, 35, 40};
    int i;

    for (i = 0; i < 7; i++)
    {
        if (numbers[i] % 7 == 0)
        {
            printf("First multiple of 7 found: %d\n", numbers[i]);
            break;
        }
    }

    // Check if loop completed without finding any multiple
    if (i == 7)
    {
        printf("No multiple of 7 found in the array.\n");
    }

    return 0;
}
