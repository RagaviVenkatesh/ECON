#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// This program implements a simple number guessing game.
int main()
{
    int secret, guess, attempts = 0;

    // Seed the random number generator
    srand(time(0));
    secret = (rand() % 100) + 1; // Secret number between 1 and 100

    printf("🎯 Guess the Secret Number between 1 and 100\n");

    do
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess < secret)
            printf("Too low! Try again.\n");
        else if (guess > secret)
            printf("Too high! Try again.\n");
        else
            printf("🎉 Correct! You guessed it in %d attempts.\n", attempts);

    } while (guess != secret);

    return 0;
}
