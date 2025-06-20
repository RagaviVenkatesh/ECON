#include <stdio.h>

// A simple function that adds two integers
int add(int a, int b)
{
    return a + b;
}

int main()
{
    // Declare a function pointer
    int (*funcPtr)(int, int);

    // Point to the add function
    funcPtr = add;

    // Call the function using the pointer
    int result = funcPtr(10, 20);

    printf("Result using function pointer: %d\n", result);

    return 0;
}

// Explanation:
// 1. We define a function `add` that takes two integers and returns their sum.
// 2. In `main`, we declare a function pointer `funcPtr` that can point to functions taking two `int` parameters and returning an `int`.
// 3. We assign the address of the `add` function to `funcPtr`.
// 4. We then call the `add` function using the function pointer `funcPtr`, passing two integers as arguments.
// 5. Finally, we print the result of the addition, which demonstrates how to use function pointers in C.