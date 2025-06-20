#include <stdio.h>

int main()
{
    float miles, kilometers;

    // Ask the user to input miles
    printf("Enter distance in miles: ");
    scanf("%f", &miles);

    // Convert miles to kilometers (1 mile = 1.60934 km)
    kilometers = miles * 1.60934;

    // Print the result
    printf("%.2f miles is equal to %.2f kilometers.\n", miles, kilometers);

    return 0;
}
