#include <stdio.h>

// This program demonstrates the use of the static storage class in C.
void showCounter()
{
    static int count = 0; // Initialized only once
    count++;
    printf("Function called %d times\n", count);
}

int main()
{
    showCounter(); // Output: 1
    showCounter(); // Output: 2
    showCounter(); // Output: 3
    return 0;
}

//// Explanation:
// The static storage class is used to declare variables that retain their value between function calls.
// In this example, the `count` variable is declared as static inside the `showCounter` function.
// It is initialized to 0 only once, and its value persists across multiple calls to the function.
// Each time `showCounter` is called, `count` is incremented, and the updated value is printed.
// This demonstrates how static variables can be used to maintain state across function invocations.
// Unlike local variables, which are destroyed when the function exits, static variables remain in memory for the lifetime of the program.
// This is useful for scenarios where you need to keep track of how many times a function has been called or maintain some state information without using global variables.
// Static variables are initialized only once, at the start of the program, and they retain their value throughout the program's execution