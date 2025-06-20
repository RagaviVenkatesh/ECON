#include <stdio.h>
#include <stdlib.h> // For rand() and srand()
#include <time.h>   // For time()

// This program generates 5 random numbers between 1 and 100 using the rand() function.
// It uses srand() to seed the random number generator with the current time to ensure different results
// each time the program is run.
int main()
{
    int i;

    // Seed the random number generator with current time
    // srand(seed) must be called once before rand()
    // to ensure that the sequence of random numbers is different each time the program runs.
    srand(time(0));

    printf("Generating 5 random numbers between 1 and 100:\n");

    for (i = 0; i < 5; i++)
    {
        int randNum = (rand() % 100) + 1; // Range: 1 to 100
        printf("%d\n", randNum);
    }

    return 0;
}
