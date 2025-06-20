#include <stdio.h>

void sortArray(int arr[], int size, int ascending)
{
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if ((ascending && arr[j] > arr[j + 1]) || (!ascending && arr[j] < arr[j + 1]))
            {
                // Swap
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void displayArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int arr[5], choice;

    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    printf("\nChoose sorting order:\n");
    printf("1. Ascending\n");
    printf("2. Descending\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1)
        sortArray(arr, 5, 1); // Ascending
    else if (choice == 2)
        sortArray(arr, 5, 0); // Descending
    else
    {
        printf("Invalid choice!\n");
        return 1;
    }

    printf("\nSorted array:\n");
    displayArray(arr, 5);

    return 0;
}
