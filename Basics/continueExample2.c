#include <stdio.h>

// This program demonstrates the use of a for loop to read 5 numbers from the user.
// It skips any negative numbers and calculates the sum of the valid positive numbers.
// If a negative number is entered, it prints a message and continues to the next iteration.
int main()
{
    int i, num, sum = 0;

    printf("Enter 5 numbers (negative numbers will be skipped):\n");

    for (i = 1; i <= 5; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if (num < 0)
        {
            printf("Negative number skipped!\n");
            continue; // Skip adding negative number
        }

        sum += num;
    }

    printf("Sum of valid positive numbers = %d\n", sum);

    return 0;
}
