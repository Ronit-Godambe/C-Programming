#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    /*
                                PROJECT 1: NUMBER GUESSING GAME
                    We will write a program that generates a random number and asks the player to guess
                    it. If the player’s guess is higher than the actual number, the program displays “Lower
                    number please”. Similarly, if the user’s guess is too low, the program prints “Higher
                    number please”.
                    When the user guesses the correct number, the program displays the number of
                    guesses the player used to arrive at the number.
                    Hint: Use loop & use a random number generator.

                    i = input by user

    */
    srand(time(0));          // Seed the random number generator
    int random = rand() % 100 + 1;   // Random number from 1 to 100
    int num_of_guesses = 0;
    int guessed;

    printf("This is a game where a random number is generated and you have to guess it.\n");
    
    do
    {
        printf("Guess the number: ");
        scanf("%d", &guessed);
        if(guessed<random){
            printf("\nHigher number please.\n\n");
        }
        else if (guessed > random){
            printf("\nLower number please.\n\n");
        }
        num_of_guesses++;

    } while (guessed != random);
    printf("\nCongratulations! the number was %d\n", random);
    printf("\nYou have guessed the number in %d guesses.\n\n", num_of_guesses);
}
