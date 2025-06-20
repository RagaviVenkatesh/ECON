#include <stdio.h>

// Global variable (accessible throughout the program)
int globalVar = 100;

void showLocal()
{
    int localVar = 50; // Local variable (exists only in this function)
    printf("Inside showLocal():\n");
    printf("  Local variable: %d\n", localVar);
    printf("  Global variable: %d\n", globalVar);
}

void modifyGlobal()
{
    globalVar = 200; // Modifying global variable
    printf("Inside modifyGlobal(): Global variable changed to %d\n", globalVar);
}

int main()
{
    int localVar = 25; // Local to main()

    printf("Inside main():\n");
    printf("  Local variable: %d\n", localVar);
    printf("  Global variable: %d\n\n", globalVar);

    showLocal();    // Local var here is different
    modifyGlobal(); // Changes globalVar for all
    printf("\nBack in main(): Global variable is now %d\n", globalVar);

    return 0;
}

// Output:
// Inside main():
//   Local variable: 25
//   Global variable: 100
// Inside showLocal():
//   Local variable: 50
//   Global variable: 100
// Inside modifyGlobal(): Global variable changed to 200
// Back in main(): Global variable is now 200

// Note: Local variables in showLocal() and main() do not affect each other.
// The global variable can be accessed and modified by any function in the program.
// This demonstrates the difference between local and global variables in C.
// Local variables are confined to their function scope, while global variables are accessible throughout the program.
// Modifying a global variable in one function affects its value in all functions.
// This is a fundamental concept in C programming, illustrating variable scope and lifetime.