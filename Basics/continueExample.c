#include <stdio.h>

int main()
{
    int i;

    printf("Odd numbers from 1 to 10:\n");

    for (i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
            continue; // Skip the rest of the loop for even numbers

        printf("%d\n", i); // This runs only for odd numbers
    }

    return 0;
}
