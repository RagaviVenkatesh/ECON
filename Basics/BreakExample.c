#include <stdio.h>

// This program demonstrates the use of a while loop to keep adding numbers
// until the user enters a negative number. The sum of all entered numbers is printed at the
// end.
int main()
{
    int num, sum = 0;

    while (1)
    { // Infinite loop
        printf("Enter a positive number (negative to stop): ");
        scanf("%d", &num);

        if (num < 0)
            break; // Exit loop if input is negative

        sum += num;
    }

    printf("Total Sum = %d\n", sum);
    return 0;
}
