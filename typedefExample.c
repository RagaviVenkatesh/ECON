#include <stdio.h>

// Without typedef
// struct Student { ... };
// struct Student s;

// With typedef:
typedef struct
{
    int id;
    char name[50];
} Student;

int main()
{
    Student s1 = {101, "Priya"};
    printf("ID: %d, Name: %s\n", s1.id, s1.name);
    return 0;
}

// Explanation:
// 1. We define a structure `Student` to hold student information.
// 2. We use `typedef` to create an alias for the structure, allowing us
//    to use `Student` directly instead of `struct Student`.
// 3. In `main`, we create an instance of `Student` and initialize it
//    with an ID and name.
// 4. Finally, we print the ID and name of the student.
//// This demonstrates how `typedef` simplifies the syntax for using structures in C,
// making the code cleaner and easier to read.
// It allows us to define a new type name for an existing type, which
// is particularly useful for structures, enums, and function pointers.