#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/*
initialize

*/
int main()
{
    srand(time(0));
    int player, computer, pscore = 0, cscore = 0, draw = 0;
    FILE *ptr;
    ptr = fopen("scorefinal.txt", "w"); // am not addding a null pointer
    fclose(ptr);
    ptr = fopen("scorefinal.txt", "a");
    fprintf(ptr, "Win it or not - Wasted precious time sucessfully \\(^.^)/\n\n");

    if (ptr == NULL)
    {
        printf("Couldn't create score file. (A signal, to stop wasting time)");
        return 0;
    }

    char cchoice[20], pchoice[20];

    printf("\nROCK PAPER SCISSORS\t(Just to waste precious time)\n\n");
    printf("Input Instructions:\n");
    // printf("Rock = 0\tPaper = 1\tScissors = 2\tQuit = 3\n");

    for (int i = 0;; i++)
    {
        computer = rand() % 3;

        if (i == 0)
        {
            // actually i want the statement below right after the "Input instructions" statement, the rest i want them as i want.
            printf("Rock = 0\tPaper = 1\tScissors = 2\tQuit = 3\n\n");
            printf("Round %d\n", i + 1);
        }
        else
        {
            printf("Round %d\n", i + 1);
            printf("Rock = 0\tPaper = 1\tScissors = 2\tQuit = 3\n");
        }

        printf("Choose: ");
        // if (scanf("%d", &player) != 1, player > 3,  player < 0) // galti hoti hai yaar - itne bade coe me choi galtiya hoti rehti hai
        if (scanf("%d", &player) != 1 || player > 3 || player < 0)
        {
            printf("...GAME OVER...\n");
            printf("Round %d:\nIlliterate person - you were supposed to enter 0, 1, 2, and 3. (¬_¬)\n\n Your Final Score: %d\tComputer's final score: %d\t Total no. of draws: %d\n\n", i + 1, pscore, cscore, draw);
            fprintf(ptr, "Round %d:\n...INVALID INPUT...\n\nIlliterate person - you were supposed to enter 0, 1, 2, and 3. (¬_¬)\n\n Your Final Score: %d\tComputer's final score: %d\t Total no. of draws: %d\n\n", i + 1, pscore, cscore, draw);
            fclose(ptr);
            return 0;
        }
        printf("\n");
        if (player == 3)
        {
            // printf("You quit.\n");
            // fprintf(ptr, "You quit.\n");
            // I think i should add an if here if round is greater than 1 then print the statement below
            if (i == 0)
            {

                printf("You quit on first round.  (x_x)");
                fprintf(ptr, "You quit on first round.  (x_x) - AND U EXPECT A REVIEW !!?? \\/");
            }
            else
            {
                printf("Round %d:\n...You quit...(realised after %d round(s))\n\n Your Final Score: %d\tComputer's final score: %d\t Total no. of draws: %d\n\n", i + 1, i + 1, pscore, cscore, draw);
                fprintf(ptr, "Round %d:\nYou quit.....(realised after %d round(s))\n\n Your Final Score: %d\tComputer's final score: %d\t Total no. of draws: %d\n\n", i + 1, i + 1, pscore, cscore, draw);
                if (cscore > pscore)
                {
                    printf("YOU LOST. LOSER (o_o)\n");
                    fprintf(ptr, "YOU LOST. LOSER (o_o)\n");
                }
                if (pscore > cscore)
                {
                    printf("YOU WON!!!\n");
                    fprintf(ptr, "YOU WON!!!\t\t\t (a useless game)\n");
                }
                if (pscore == cscore)
                {
                    printf("o_o THIS WAS AN OVERALL DRAW o_o\n");
                    fprintf(ptr, "o_o THIS WAS AN OVERALL DRAW o_o\n");
                }
                fclose(ptr);
            }
            break;
        }

        if (player == 0)
        {
            strcpy(pchoice, "Rock");
        }
        if (player == 1)
        {
            strcpy(pchoice, "Paper");
        }
        if (player == 2)
        {
            strcpy(pchoice, "Scissors");
        }
        if (computer == 0)
        {
            strcpy(cchoice, "Rock");
        }
        if (computer == 1)
        {
            strcpy(cchoice, "Paper");
        }
        if (computer == 2)
        {
            strcpy(cchoice, "Scissors");
        }

        printf("You Chose: %s\n", pchoice);
        printf("Computer chose: %s\n", cchoice);

        if ((computer == 0 && player == 0) || (computer == 1 && player == 1) || (computer == 2 && player == 2))
        {
            // printf("Your Chose: %s\nComputer Chose: %s\n", pchoice, cchoice);
            printf("...IT WAS A DRAW...\t\t(useless human)\n\n");
            draw++;
            fprintf(ptr, "Round %d:\nYou Chose: %s\tComputer Chose: %s\n\n", i + 1, pchoice, cchoice);
            fprintf(ptr, "It was a draw\t No. of draws: %d\n\n", draw);
            fprintf(ptr, "--------------------------------------------------------\n");
        }
        if ((player == 0 && computer == 1) || (player == 1 && computer == 2) || (player == 2 && computer == 0))
        {
            printf("...You Lose...\t\t(¬_¬)\n\n");
            cscore++;
            fprintf(ptr, "Round %d:\nYou chose: %s\t Computer Chose: %s\nYou lost.\nYour Score: %d\tComputer's score: %d\n\n", i + 1, pchoice, cchoice, pscore, cscore);
            fprintf(ptr, "--------------------------------------------------------\n");
        }
        if ((player == 1 && computer == 0) || (player == 2 && computer == 1) || (player == 0 && computer == 2))
        {
            printf("(^o^) You Win! (^o^)\n\n");
            pscore++;
            fprintf(ptr, "Round %d:\nYou chose: %s\t Computer Chose: %s\nYou Won!\nYour Score: %d\tComputer's score: %d\n\n", i + 1, pchoice, cchoice, pscore, cscore);
            fprintf(ptr, "--------------------------------------------------------\n");
        }
    }
    fclose(ptr);
    return 0;
}