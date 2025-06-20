#include <stdio.h>

// This program demonstrates the use of the register storage class in C.
// The register storage class is used to suggest to the compiler that a variable should be stored in a CPU register instead of RAM for faster access.
// Note: The compiler may ignore this suggestion based on
int main()
{
    register int i;

    for (i = 1; i <= 5; i++)
    {
        printf("%d ", i);
    }

    // Uncommenting the line below will cause a compile-time error
    // printf("\nAddress of i: %p", &i); // ❌ Invalid

    return 0;
}

// When to Use register?
// For loop counters in performance - critical code
// For variables used repeatedly in tight loops