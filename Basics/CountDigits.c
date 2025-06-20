#include <stdio.h>

int main()
{
    int num, count = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Handle 0 explicitly (it has 1 digit)
    if (num == 0)
    {
        count = 1;
    }
    else
    {
        // Make number positive if it's negative
        if (num < 0)
            num = -num;

        // Count digits
        while (num != 0)
        {
            num = num / 10;
            count++;
        }
    }

    printf("Number of digits = %d\n", count);

    return 0;
}
