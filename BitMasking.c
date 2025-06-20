#include <stdio.h>

void printBits(unsigned int num)
{
    for (int i = 7; i >= 0; i--)
    {
        printf("%d", (num >> i) & 1);
    }
    printf("\n");
}

int main()
{
    unsigned int value = 0b00101101; // 45
    unsigned int mask;

    printf("Original value: ");
    printBits(value);

    // ✅ Set bit 6 (0-based from right)
    mask = 1 << 6;
    value = value | mask;
    printf("After setting bit 6: ");
    printBits(value);

    // ✅ Clear bit 3
    mask = ~(1 << 3);
    value = value & mask;
    printf("After clearing bit 3: ");
    printBits(value);

    // ✅ Toggle bit 0
    mask = 1 << 0;
    value = value ^ mask;
    printf("After toggling bit 0: ");
    printBits(value);

    // ✅ Check if bit 4 is set
    mask = 1 << 4;
    if (value & mask)
        printf("Bit 4 is set\n");
    else
        printf("Bit 4 is not set\n");

    return 0;
}
