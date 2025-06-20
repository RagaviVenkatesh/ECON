#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

// Function to update salary (pass by reference)
void updateSalary(struct Employee *e, float increment)
{
    e->salary += increment;
}

// Function to display employee details
void displayEmployee(const struct Employee *e)
{
    printf("\nEmployee Details:\n");
    printf("ID: %d\n", e->id);
    printf("Name: %s\n", e->name);
    printf("Salary: %.2f\n", e->salary);
}

int main()
{
    struct Employee emp = {102, "Arun Sharma", 55000};

    // Display original
    displayEmployee(&emp);

    // Update salary by reference
    updateSalary(&emp, 5000);

    // Display after update
    displayEmployee(&emp);

    return 0;
}
