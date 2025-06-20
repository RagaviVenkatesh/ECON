#include <stdio.h>

int add(int x, int y) { return x + y; }
int mul(int x, int y) { return x * y; }

int main(void)
{
    // 1) Declare
    int (*op)(int, int);

    // 2) Assign
    op = add;
    printf("5 + 3 = %d\n", op(5, 3)); // calls add(5,3)

    // 3) Reassign
    op = mul;
    printf("5 * 3 = %d\n", op(5, 3)); // calls mul(5,3)

    return 0;
}
