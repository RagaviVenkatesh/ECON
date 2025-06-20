#include <stdio.h>

int main()
{
    int i = 1;

    // Loop to print numbers from 1 to 10
    while (i <= 10)
    {
        printf("%d\n", i);
        i++; // increment i
    }

    // Loop to print even numbers from 2 to 20
    i = 2; // reset i to 2
    while (i <= 20)
    {
        printf("%d\n", i);
        i += 2; // increment i by 2
    }

    return 0;
}
