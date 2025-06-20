#include <stdio.h>

// This program demonstrates the use of the auto storage class in C.
void showAuto()
{
    auto int x = 5; // Local variable with automatic storage
    printf("Value of x: %d\n", x);
}

int main()
{
    showAuto();
    return 0;
}

// Explanation:
// The `auto` storage class is the default for local variables in C.
// It indicates that the variable has automatic storage duration, meaning it is created when the block in which it is defined is entered and destroyed when the block is exited.
// In this example, `x` is declared as an `auto` variable inside the `showAuto` function.
// When `showAuto` is called, `x` is initialized to 5 and its value is printed.
// After the function exits, `x` goes out of scope and is destroyed.
// The `auto` keyword is rarely used explicitly in modern C code, as local variables are automatically treated as `auto` by default.
// However, it can be useful for clarity in some cases, especially when distinguishing between different storage classes.