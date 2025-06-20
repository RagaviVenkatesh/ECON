#include <stdio.h>

int main()
{
    int a[5] = {1, 3, 5, 7, 9};
    int b[4] = {2, 4, 6, 8};
    int merged[9];
    int i, j, k;

    // Copy elements of array a[] to merged[]
    for (i = 0; i < 5; i++)
    {
        merged[i] = a[i];
    }

    // Copy elements of array b[] to merged[]
    for (j = 0; j < 4; j++)
    {
        merged[i + j] = b[j];
    }

    // Print merged array
    printf("Merged Array: ");
    for (k = 0; k < 9; k++)
    {
        printf("%d ", merged[k]);
    }

    printf("\n");
    return 0;
}
