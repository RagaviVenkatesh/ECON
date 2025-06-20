#include <stdio.h>
#include <math.h>

// This program demonstrates the use of various mathematical functions from the math.h library.
// It includes functions for rounding, square root, power, absolute value, remainder,
// logarithm, and trigonometric calculations.
int main()
{
    double amount = 1050.75;

    printf("Ceil: %.2f\n", ceil(amount));                       // → 1051.00
    printf("Floor: %.2f\n", floor(amount));                     // → 1050.00
    printf("Round: %.2f\n", round(amount));                     // → 1051.00
    printf("Sqrt of 16: %.2f\n", sqrt(16));                     // → 4.00
    printf("2^5: %.2f\n", pow(2, 5));                           // → 32.00
    printf("Absolute value of -9.3: %.2f\n", fabs(-9.3));       // → 9.30
    printf("Remainder of 7.5 / 2: %.2f\n", fmod(7.5, 2));       // → 1.50
    printf("Natural Log of e (2.71828): %.2f\n", log(2.71828)); // → ~1.00
    printf("Log10 of 1000: %.2f\n", log10(1000));               // → 3.00
    printf("Sine of 90°: %.2f\n", sin(M_PI / 2));               // → 1.00

    return 0;
}
