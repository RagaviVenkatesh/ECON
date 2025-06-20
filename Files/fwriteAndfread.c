#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int roll;
    char name[50];
    float marks;
} Student;

int main()
{
    Student s1 = {101, "Arun", 88.5};
    Student s2;

    // Write struct to binary file
    FILE *fp = fopen("student.dat", "wb");
    if (fp == NULL)
    {
        printf("Error opening file for writing.\n");
        return 1;
    }
    fwrite(&s1, sizeof(Student), 1, fp);
    fclose(fp);

    // Read struct from binary file
    fp = fopen("student.dat", "rb");
    if (fp == NULL)
    {
        printf("Error opening file for reading.\n");
        return 1;
    }
    fread(&s2, sizeof(Student), 1, fp);
    fclose(fp);

    // Display read data
    printf("Read from file:\n");
    printf("Roll: %d\nName: %s\nMarks: %.2f\n", s2.roll, s2.name, s2.marks);

    return 0;
}

// This program demonstrates how to write and read a structure to and from a binary file using fwrite and fread.
// It defines a structure `Student` with fields for roll number, name, and marks.
// The program first writes an instance of `Student` to a binary file named "student.dat" using `fwrite`.
// Then, it reads the data back into another `Student` instance using `fread`.
// Finally, it displays the read data to verify that the write and read operations were successful.