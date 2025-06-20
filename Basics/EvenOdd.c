#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // solution 1
    if (num % 2 == 0)
        printf("%d is Even\n", num);
    else
        printf("%d is Odd\n", num);

    // solution 2
    if (num & 1)
        printf("Odd\n");
    else
        printf("Even\n");

    // solution 3
    if ((num / 2) * 2 == num)
        printf("Even\n");
    else
        printf("Odd\n");

    return 0;
}
