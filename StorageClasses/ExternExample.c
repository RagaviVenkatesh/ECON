#include <stdio.h>

// Global variable
int x = 10;

// Function that declares external variable
void show()
{
    extern int x; // Declare x is defined elsewhere
    printf("Value of x in show(): %d\n", x);
}

int main()
{
    show();
    return 0;
}
// Explanation:
// This program demonstrates the use of the `extern` storage class in C.
// The `extern` keyword is used to declare a variable that is defined in another file or outside the current scope.
// In this example, `x` is a global variable defined at the top of the file.
// The `show` function declares `extern int x;`, indicating that `x` is defined elsewhere (in this case, globally).
// When `show` is called, it prints the value of `x`, which is 10.

// It does not allocate memory, just declares that the variable exists elsewhere.
// Mainly used to access global variables across different files.