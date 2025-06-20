#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Usage: %s num1 num2\n", argv[0]);
        return 1;
    }

    int a = atoi(argv[1]); // Convert to int
    int b = atoi(argv[2]);

    int sum = a + b;

    printf("Sum of %d and %d is %d\n", a, b, sum);

    return 0;
}

// $ gcc sum.c - o sum
// $./sum 15 30 Sum of 15 and 30 is 45
