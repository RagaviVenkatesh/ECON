#include <stdio.h>

// Function declaration: takes an int, returns an int
int square(int n)
{
    return n * n;
}

int main()
{
    int num = 5;
    int result;

    result = square(num); // Call the function and store the return value

    printf("Square of %d is %d\n", num, result);
    return 0;
}
