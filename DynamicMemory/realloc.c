#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr, n, new_n;

    printf("Enter initial number of elements: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter new size: ");
    scanf("%d", &new_n);

    arr = (int *)realloc(arr, new_n * sizeof(int));
    if (arr == NULL)
    {
        printf("Memory reallocation failed.\n");
        return 1;
    }

    if (new_n > n)
    {
        printf("Enter %d more elements:\n", new_n - n);
        for (int i = n; i < new_n; i++)
        {
            scanf("%d", &arr[i]);
        }
    }

    printf("Final array:\n");
    for (int i = 0; i < new_n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr); // Always free dynamically allocated memory
    return 0;
}
