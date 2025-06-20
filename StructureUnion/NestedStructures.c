#include <stdio.h>

struct Address
{
    char street[50];
    char city[50];
    int pincode;
};

struct Student
{
    int roll;
    char name[50];
    struct Address addr; // Nested structure
};

int main()
{
    struct Student s1;

    // Assign values
    s1.roll = 101;
    sprintf(s1.name, "Ravi Kumar");
    sprintf(s1.addr.street, "12 MG Road");
    sprintf(s1.addr.city, "Chennai");
    s1.addr.pincode = 600032;

    // Print values
    printf("Roll: %d\n", s1.roll);
    printf("Name: %s\n", s1.name);
    printf("Address: %s, %s - %d\n", s1.addr.street, s1.addr.city, s1.addr.pincode);

    return 0;
}
