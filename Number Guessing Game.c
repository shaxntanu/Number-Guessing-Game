#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    printf("Welcome to the number guessing game!\nRULES:\nThe player must guess a number between 1 and 100.\nAfter each guess, the program will respond with:\n\t'Lower number please' if the guess is higher than the target number.\n\t'Higher number please' if the guess is lower than the target number.\nThe game continues until the player guesses the correct number.\nOn a correct guess, the program displays the total number of guesses taken.\nOnly integer inputs should be entered during guesses.\n");
    int number, guess, guesses = 0;
    // Initialize random number generator
    srand(time(NULL));
    // Generate random number between 1 and 100
    number = rand() % 100 + 1;
    printf("\nGuess the number (between 1 and 100):");
    // Loop until the correct guess
    do {
        scanf("%d", &guess);
        guesses++;

        if (guess > number) {
            printf("Lower number please\n");
        } else if (guess < number) {
            printf("Higher number please\n");
        } else {
            printf("Correct! You guessed it in %d guesses.\n", guesses);
        }
    } while (guess != number);
    printf("Thank You for playing!\nMade by Shantanu");
    return 0;
}
