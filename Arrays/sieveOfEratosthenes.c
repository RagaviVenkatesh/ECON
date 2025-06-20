#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n;

    printf("Find all prime numbers up to: ");
    scanf("%d", &n);

    // Create a boolean array "isPrime[0..n]" and initialize all entries as true
    bool isPrime[n + 1];

    for (int i = 0; i <= n; i++)
        isPrime[i] = true;

    isPrime[0] = false; // 0 is not prime
    isPrime[1] = false; // 1 is not prime

    for (int p = 2; p * p <= n; p++)
    {
        if (isPrime[p])
        {
            // Mark all multiples of p as not prime
            for (int i = p * p; i <= n; i += p)
                isPrime[i] = false;
        }
    }

    // Print all prime numbers
    printf("Prime numbers up to %d are:\n", n);
    for (int i = 2; i <= n; i++)
    {
        if (isPrime[i])
            printf("%d ", i);
    }

    printf("\n");
    return 0;
}
