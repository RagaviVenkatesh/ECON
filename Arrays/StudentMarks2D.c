#include <stdio.h>

// This program demonstrates how to use a 2D array to store and display marks of students in different subjects.
int main()
{
    int marks[3][4]; // 3 students, 4 subjects
    int i, j;

    // Input: Read marks
    printf("Enter marks for 3 students in 4 subjects:\n");
    for (i = 0; i < 3; i++)
    {
        printf("Student %d:\n", i + 1);
        for (j = 0; j < 4; j++)
        {
            printf("  Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
        }
    }

    // Output: Display marks
    printf("\n--- Marks Table ---\n");
    for (i = 0; i < 3; i++)
    {
        printf("Student %d: ", i + 1);
        for (j = 0; j < 4; j++)
        {
            printf("%d ", marks[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// Output:
//  Enter marks for 3 students in 4 subjects:
//  Student 1:
//    Subject 1: 85
//    Subject 2: 90
//    Subject 3: 78
//    Subject 4: 88
//  Student 2:
//    Subject 1: 92
//    Subject 2: 81
//    Subject 3: 75
//    Subject 4: 89
//  Student 3:
//    Subject 1: 80
//    Subject 2: 85
//    Subject 3: 90
//    Subject 4: 95
//  --- Marks Table ---
//  Student 1: 85 90 78 88
//  Student 2: 92 81 75 89
//  Student 3: 80 85 90 95