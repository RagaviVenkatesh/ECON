#include <stdio.h>

enum Day
{
    SUN,
    MON,
    TUE,
    WED,
    THU,
    FRI,
    SAT
};

int main()
{
    enum Day today = WED;

    if (today == WED)
        printf("It's Wednesday!\n");

    printf("Numeric value of today is: %d\n", today); // Output: 3

    return 0;
}
// Explanation:
// 1. We define an enumeration `Day` with constants for each day of the week.
// 2. In `main`, we declare a variable `today` of type `enum Day` and assign it the value `WED` (Wednesday).
// 3. We check if `today` is equal to `WED` and print a message if it is.
// 4. Finally, we print the numeric value of `today`, which corresponds to the index of `WED` in the enumeration (0 for SUN, 1 for MON, ..., 3 for WED).
// 5. Enumerations in C provide a way to define named constants, making the code more readable and maintainable. They are particularly useful for representing a set of related values, such as days of the week, months, or states in a finite state machine.