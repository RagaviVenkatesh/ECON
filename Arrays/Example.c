#include <stdio.h>

int main()
{
    int numbers[5]; // Declare an array of 5 integers
    int i;

    // Input values into the array
    printf("Enter 5 integers:\n");
    for (i = 0; i < 5; i++)
    {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Display the values
    printf("\nYou entered:\n");
    for (i = 0; i < 5; i++)
    {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }

    return 0;
}

// Explanation:
// This program demonstrates how to declare, initialize, and access an array in C.
// It declares an array `numbers` of size 5 to hold integers.
// The user is prompted to enter 5 integers, which are stored in the array.
// After all inputs are collected, the program displays the values stored in the array.
// Arrays in C are zero-indexed, meaning the first element is accessed with index 0 and the last element with index 4 in this case.
