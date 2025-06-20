#include <stdio.h>

int main()
{
    int i;

    // Loop from 1 to 10
    for (i = 1; i <= 10; i++)
    {
        printf("%d\n", i);
    }

    // Loop from 10 to 1
    for (i = 10; i >= 1; i--)
        printf("%d\n", i);

    // Even numbers from 2 to 20
    for (i = 2; i <= 20; i += 2)
        printf("%d\n", i);

    return 0;
}
