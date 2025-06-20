#include <stdio.h>

int main()
{
    int x = 10;
    int *ptr; // pointer to int

    ptr = &x; // store address of x in ptr

    printf("Value of x       = %d\n", x);
    printf("Address of x     = %p\n", &x);
    printf("Value of ptr     = %p (i.e., address of x)\n", ptr);
    printf("Value at *ptr    = %d (i.e., value at address stored in ptr)\n", *ptr);

    // Change value using pointer
    *ptr = 20;
    printf("\nAfter modifying *ptr = 20:\n");
    printf("Value of x       = %d\n", x);
    printf("Value at *ptr    = %d\n", *ptr);

    return 0;
}
// Explanation:
// 1. We declare an integer variable `x` and a pointer `ptr`.
// 2. We assign the address of `x` to `ptr` using the address-of operator `&`.
// 3. We print the value of `x`, its address, the value of `ptr` (which is the address of `x`), and the value at the address stored in `ptr` (which is the value of `x`).
// 4. We then modify the value of `x` using the pointer `ptr` by dereferencing it with the `*` operator.
// 5. Finally, we print the updated value of `x` and the value at `*ptr` to show that both reflect the change made through the pointer.
//// Note: Pointers are powerful tools in C that allow direct memory access and manipulation, enabling efficient