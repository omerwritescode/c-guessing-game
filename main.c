#include <stdio.h>
#include <stdlib.h> // for rand() and srand()
#include <time.h>   // for time()

int main()
{
    // Initialize random seed based on current time
    srand(time(0)); // ensures different results each run

    // Generate a number between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guess;

    // printf("Your random number is: %d\n", randomNumber);

    do
    {
        printf("Guess the number: ");
        scanf("%d", &guess);
        if (guess > randomNumber)
        {
            printf("The number is lower than your guess.\n");
        }
        else if (guess < randomNumber)
        {
            printf("The number is higher than your guess.\n");
        }
        else
        {
            printf("Congratulations! You guessed the number.\n");
        }
        no_of_guesses++;

    } while (guess != randomNumber);

    printf("You guessed the number in %d guesses.", no_of_guesses);

    return 0;
}
