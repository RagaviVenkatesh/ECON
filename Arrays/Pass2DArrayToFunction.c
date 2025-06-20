#include <stdio.h>

#define STUDENTS 3
#define SUBJECTS 4

// Function to read marks
void readMarks(int marks[STUDENTS][SUBJECTS])
{
    for (int i = 0; i < STUDENTS; i++)
    {
        printf("Enter marks for Student %d:\n", i + 1);
        for (int j = 0; j < SUBJECTS; j++)
        {
            printf("  Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
        }
    }
}

// Function to display marks
void displayMarks(int marks[STUDENTS][SUBJECTS])
{
    printf("\n--- Marks Table ---\n");
    for (int i = 0; i < STUDENTS; i++)
    {
        printf("Student %d: ", i + 1);
        for (int j = 0; j < SUBJECTS; j++)
        {
            printf("%d ", marks[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int marks[STUDENTS][SUBJECTS];

    readMarks(marks);    // Pass 2D array to input function
    displayMarks(marks); // Pass 2D array to display function

    return 0;
}
