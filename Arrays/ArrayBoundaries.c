#include <stdio.h>

int main()
{
    int arr[3] = {10, 20, 30};

    printf("arr[0] = %d\n", arr[0]);
    printf("arr[1] = %d\n", arr[1]);
    printf("arr[2] = %d\n", arr[2]);

    // Accessing beyond declared size
    printf("arr[3] = %d (undefined behavior!)\n", arr[3]);   // ⚠️ Not safe
    printf("arr[10] = %d (undefined behavior!)\n", arr[10]); // ⚠️ Worse

    return 0;
}

// C does not perform bounds checking on arrays at runtime.This means :
// ✅ It compiles without error
// ❌ But it leads to undefined behavior(garbage values, crashes, memory corruption)

// May print a random garbage value
// May cause segmentation fault
// May overwrite adjacent memory if used in assignment
