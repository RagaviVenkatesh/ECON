#include <stdio.h>

// Keep Adding Numbers Until User Stops
int main()
{
    int num, sum = 0;
    char choice;

    do
    {
        printf("Enter a number: ");
        scanf("%d", &num);
        sum += num;

        printf("Do you want to enter another number? (y/n): ");
        scanf(" %c", &choice); // space before %c to consume newline

    } while (choice == 'y' || choice == 'Y');

    printf("Total Sum = %d\n", sum);

    return 0;
}
