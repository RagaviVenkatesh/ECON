#include <stdio.h>

// Function to take input in array
void readArray(int arr[], int size)
{
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

// Function to display array
void displayArray(int arr[], int size)
{
    printf("Array elements: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to find sum of array
int sumArray(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

// Function to find maximum element
int maxArray(int arr[], int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int main()
{
    int nums[5];

    readArray(nums, 5);
    displayArray(nums, 5);

    int total = sumArray(nums, 5);
    int max = maxArray(nums, 5);

    printf("Sum of array = %d\n", total);
    printf("Maximum element = %d\n", max);

    return 0;
}
