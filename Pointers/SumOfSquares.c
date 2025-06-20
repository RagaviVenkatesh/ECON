#include <stdio.h>

// Function to square a number
int square(int x)
{
    return x * x;
}

// Generalized function that takes a function pointer
int sumWithOperation(int arr[], int size, int (*operation)(int))
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += operation(arr[i]); // Apply function to each element
    }
    return sum;
}

int main()
{
    int numbers[] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int result = sumWithOperation(numbers, size, square);

    printf("Sum of squares = %d\n", result);

    return 0;
}
