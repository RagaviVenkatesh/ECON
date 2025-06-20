#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr;

    // Point to the first element of the array
    ptr = arr;

    printf("Using array indexing:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    printf("\nUsing pointer arithmetic:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("*(ptr + %d) = %d\n", i, *(ptr + i));
    }

    return 0;
}

// Explanation:
// 1. We declare an array `arr` of 5 integers and initialize it with values.
// 2. We declare a pointer `ptr` and assign it the address of the first element of the array `arr`.
// 3. We use a loop to print the elements of the array using both array indexing and pointer arithmetic.
// 4. In the first loop, we access the elements of the array using the array indexing syntax `arr[i]`.
// 5. In the second loop, we access the same elements using pointer arithmetic with `*(ptr + i)`,
//    which dereferences the pointer `ptr` offset by `i` positions to access the corresponding element in the array.
// 6. The output shows that both methods yield the same results, demonstrating how pointers can be used to access array elements in C.
