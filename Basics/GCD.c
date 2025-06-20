#include <stdio.h>

int main()
{
    int num1, num2, gcd;

    // Input two positive integers
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    // Euclidean algorithm for GCD
    int a = num1;
    int b = num2;

    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }

    gcd = a;

    // Display the result
    printf("GCD of %d and %d is %d\n", num1, num2, gcd);

    return 0;
}
