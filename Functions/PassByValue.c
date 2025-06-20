#include <stdio.h>

// Function to swap values (pass by value - doesn't actually swap)
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    printf("Inside swap() - a: %d, b: %d\n", a, b);
}

int main()
{
    int x = 10, y = 20;

    printf("Before swap() - x: %d, y: %d\n", x, y);
    swap(x, y);                                    // Pass by value
    printf("After swap() - x: %d, y: %d\n", x, y); // Values unchanged

    return 0;
}

// Explanation:
// 1. The `swap` function takes two integers `a` and `b` as parameters.
// 2. Inside `swap`, we attempt to swap the values of `a` and `b` using a temporary variable.
// 3. However, since `a` and `b` are passed by value, the original variables `x` and `y` in `main` remain unchanged.
// 4. The output shows that the values of `x` and `y` before and after the call to `swap` are the same, demonstrating that the swap did not affect the original variables.
// 5. This illustrates the concept of "pass by value" in C, where the function receives copies of the arguments, and modifications to these copies do not affect the original variables.