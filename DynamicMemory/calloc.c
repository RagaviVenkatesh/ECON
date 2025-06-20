#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int *arr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Allocate memory using calloc
    arr = (int *)calloc(n, sizeof(int));

    if (arr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Since calloc initializes to 0, let's print initial values
    printf("Initial array values:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]); // will print all 0s
    }

    // Accept input values
    printf("\n\nEnter %d numbers:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Final array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    free(arr); // Clean up memory
    return 0;
}
