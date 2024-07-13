/*
We will write a program that generates a random number and asks the player to guess
it. If the player’s guess is higher than the actual number, the program displays “Lower
number please”. Similarly, if the user’s guess is too low, the program prints “Higher
number please”.
When the user guesses the correct number, the program displays the number of
guesses the player used to arrive at the number.
Hint: Use loop & use a random number generator
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateRandomNumber()
{
    // Seed the random number generator
    srand(time(NULL));

    // Generate a random number between 1 and 100
    int random_number = (rand() % 100) + 1;

    return random_number;
}

int main()
{

    int random_number, userInput, no_Of_guesses = 0;
    
    random_number = generateRandomNumber();

    printf("WELCOME TO GUESS THE NUMBER\n");

    do
    {
        printf("Guess the number: ");
        scanf("%d", &userInput);

        no_Of_guesses++;

        if (userInput > random_number)
            printf("Lower number please.\n");
        else if (userInput < random_number)
            printf("Higher number please.\n");

    } while (userInput != random_number);

    printf("Congrats, you took %d guesses to clear the game.\n", no_Of_guesses);
    return 0;
}