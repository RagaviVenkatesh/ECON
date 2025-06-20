#include <stdio.h>
#include <string.h>

struct Employee
{
    int id;
    char name[50];
    float basic_salary;
    float hra;
    float da;
    float medical;
    float pf;
    float insurance;
};

int main()
{
    int n, search_id;
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct Employee emp[n];

    printf("Enter your input for every employee:\n");
    for (int i = 0; i < n; i++)
    {
        printf("\nEmployee ID: ");
        scanf("%d", &emp[i].id);
        printf("Employee Name: ");
        scanf("%s", emp[i].name);
        printf("Basic Salary, HRA: ");
        scanf("%f %f", &emp[i].basic_salary, &emp[i].hra);
        printf("DA, Medical Allowance: ");
        scanf("%f %f", &emp[i].da, &emp[i].medical);
        printf("PF and Insurance: ");
        scanf("%f %f", &emp[i].pf, &emp[i].insurance);
    }

    printf("\nEnter employee ID to get payslip: ");
    scanf("%d", &search_id);

    for (int i = 0; i < n; i++)
    {
        if (emp[i].id == search_id)
        {
            float gross = emp[i].basic_salary + emp[i].hra + emp[i].da + emp[i].medical;
            float deductions = emp[i].pf + emp[i].insurance;
            float net = gross - deductions;

            printf("\nSalary Slip of %s:\n", emp[i].name);
            printf("Employee ID: %d\n", emp[i].id);
            printf("Basic Salary: %.0f\n", emp[i].basic_salary);
            printf("House Rent Allowance: %.0f\n", emp[i].hra);
            printf("Dearness Allowance: %.0f\n", emp[i].da);
            printf("Medical Allowance: %.0f\n", emp[i].medical);
            printf("Gross Salary: %.2f Rupees\n", gross);
            printf("\nDeductions:\n");
            printf("Provident fund: %.0f\n", emp[i].pf);
            printf("Insurance: %.0f\n", emp[i].insurance);
            printf("Net Salary: %.2f Rupees\n", net);
            return 0;
        }
    }

    printf("Employee ID not found.\n");
    return 0;
}
