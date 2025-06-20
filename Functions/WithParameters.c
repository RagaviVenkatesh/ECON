#include <stdio.h>

// A void function that takes two parameters
void printSum(int a, int b)
{
    int sum = a + b;
    printf("Sum of %d and %d is %d\n", a, b, sum);
}

int main()
{
    int x = 10, y = 20;

    // Call the function with arguments
    printSum(x, y); // Output: Sum of 10 and 20 is 30

    return 0;
}
