#include <stdio.h>

// Define functions
int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divide(int a, int b) { return b != 0 ? a / b : 0; }

int main()
{
    int choice, a, b;

    // Array of function pointers
    int (*operations[4])(int, int) = {add, subtract, multiply, divide};

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("\nChoose operation:\n");
    printf("0. Add\n1. Subtract\n2. Multiply\n3. Divide\n");
    printf("Enter your choice (0-3): ");
    scanf("%d", &choice);

    if (choice >= 0 && choice < 4)
    {
        int result = operations[choice](a, b);
        printf("Result = %d\n", result);
    }
    else
    {
        printf("Invalid choice!\n");
    }

    return 0;
}

// Explanation:
// 1. We define four basic arithmetic functions: `add`, `subtract`, `multiply`, and `divide`.
// 2. In `main`, we declare an array of function pointers `operations` that can point to functions taking two `int` parameters and returning an `int`.
// 3. We prompt the user to enter two integers and choose an operation.
// 4. Based on the user's choice, we call the corresponding function from the `operations` array and print the result.
// 5. If the choice is invalid, we display an error message.
// 6. This demonstrates how to use an array of function pointers to call different functions based on user input, allowing for flexible and dynamic function calls in C.