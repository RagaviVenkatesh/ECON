#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

// Function to display employee details (pass by value)
void displayEmployee(struct Employee e)
{
    printf("\nEmployee Details:\n");
    printf("ID: %d\n", e.id);
    printf("Name: %s\n", e.name);
    printf("Salary: %.2f\n", e.salary);
}

// Function to get employee details (return a struct)
struct Employee getEmployee()
{
    struct Employee temp;
    printf("Enter Employee ID: ");
    scanf("%d", &temp.id);
    printf("Enter Name: ");
    scanf(" %[^\n]", temp.name); // to read string with spaces
    printf("Enter Salary: ");
    scanf("%f", &temp.salary);
    return temp;
}

int main()
{
    struct Employee emp;

    // Get employee info from user
    emp = getEmployee();

    // Display the info
    displayEmployee(emp);

    return 0;
}
