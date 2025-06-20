#include <stdio.h>

// Function to swap values using pointers (pass by reference)
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("Inside swap() - a: %d, b: %d\n", *a, *b);
}

int main()
{
    int x = 10, y = 20;

    printf("Before swap() - x: %d, y: %d\n", x, y);
    swap(&x, &y);                                  // Pass addresses (references)
    printf("After swap() - x: %d, y: %d\n", x, y); // Values are swapped

    return 0;
}

// Explanation:
// 1. The `swap` function takes two integer pointers `a` and `b` as parameters.
// 2. Inside `swap`, we dereference the pointers to access and swap the values they point to.
// 3. In `main`, we pass the addresses of `x and `y` to the `swap` function using the address-of operator `&`.
// 4. After the call to `swap`, the values of `x` and `y` are swapped, demonstrating the concept of "pass by reference" in C.
// 5. This allows the function to modify the original variables directly, as it operates on their memory addresses rather than copies of their values.
// 6. The output shows that the values of `x` and `y` before and after the call to `swap` reflect the change, confirming that the swap was successful.