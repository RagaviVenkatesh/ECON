#include <stdio.h>

int main()
{
    int num1, num2;
    char op;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%d", &num2);

    if (op == '+')
    {
        printf("Result = %d\n", num1 + num2);
    }
    else if (op == '-')
    {
        printf("Result = %d\n", num1 - num2);
    }
    else if (op == '*')
    {
        printf("Result = %d\n", num1 * num2);
    }
    else if (op == '/')
    {
        if (num2 != 0)
            printf("Result = %.2f\n", (float)num1 / num2);
        else
            printf("Error: Division by zero!\n");
    }
    else
    {
        printf("Invalid operator!\n");
    }

    return 0;
}
