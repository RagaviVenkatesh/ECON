#include <stdio.h>

// Define the structure
// This program defines a structure to store employee details and allows user input and output of those details.
// Structure to hold employee details
struct Employee
{
    char name[50];        // 50
    int id;               // 4
    int age;              // 4
    char designation[50]; // 50
    float salary;         // 4
};

int main()
{
    struct Employee emp;
    // struct Employee emp2;
    // struct Employee emp;

    // Input from user
    printf("Enter name: ");
    scanf("%s", emp.name);

    printf("Enter ID: ");
    scanf("%d", &emp.id);

    printf("Enter age: ");
    scanf("%d", &emp.age);

    printf("Enter designation: ");
    scanf("%s", emp.designation);

    printf("Enter Salary: ");
    scanf("%f", &emp.salary);

    // Output the details
    printf("\nEmployee Details\n");
    printf("Name of the Employee : %s\n", emp.name);
    printf("ID of the Employee : %d\n", emp.id);
    printf("Age of the Employee : %d\n", emp.age);
    printf("Designation of the Employee : %s\n", emp.designation);
    printf("Salary of the Employee : %.2f\n", emp.salary);

    return 0;
}
