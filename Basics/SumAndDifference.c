#include <stdio.h>

int main()
{
    int num1, num2, sum, difference;

    // Input two numbers from the user
    printf("Enter first integer: ");
    scanf("%d", &num1);

    printf("Enter second integer: ");
    scanf("%d", &num2);

    // Compute sum and difference
    sum = num1 + num2;
    difference = num1 - num2;

    // Display the results
    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", difference);

    return 0;
}
