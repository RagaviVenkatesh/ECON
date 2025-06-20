#include <stdio.h>

int main()
{
    int a = 7, b = 2;
    float result;

    // Typecasting int to float to get accurate division
    result = (float)a / b;

    printf("Without typecasting: %d / %d = %d\n", a, b, a / b);
    printf("With typecasting: (float)%d / %d = %.2f\n", a, b, result);

    return 0;
}
