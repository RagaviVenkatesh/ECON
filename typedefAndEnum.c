#include <stdio.h>

/*
 * 1) Define an enum for colors, and give it a type name `Color`.
 *    By using typedef, you can write `Color` instead of `enum Color`.
 */
typedef enum
{
    RED,   // 0
    GREEN, // 1
    BLUE,  // 2
    YELLOW // 3
} Color;

/*
 * 2) Define a struct representing a Car, and alias it to the name `Car`
 *    so you don’t have to write `struct Car` everywhere.
 */
typedef struct
{
    const char *brand;
    Color color;
} Car;

/* Helper: turn a Color into a human-readable string */
const char *color_to_string(Color c)
{
    switch (c)
    {
    case RED:
        return "Red";
    case GREEN:
        return "Green";
    case BLUE:
        return "Blue";
    case YELLOW:
        return "Yellow";
    default:
        return "Unknown";
    }
}

int main(void)
{
    /* Create a Car instance using our typedef’d types */
    Car my_car = {.brand = "Toyota", .color = GREEN};

    printf("My car is a %s %s.\n",
           color_to_string(my_car.color),
           my_car.brand);
    return 0;
}
