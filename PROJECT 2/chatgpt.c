#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    char *name[] = {"Rock", "Paper", "Scissors"};

    int player, computer;
    int pscore = 0, cscore = 0, draw = 0;

    FILE *fp = fopen("score.txt", "w");

    if (fp == NULL)
    {
        printf("Cannot open file.\n");
        return 1;
    }

    printf("===== ROCK PAPER SCISSORS =====\n");

    while (1)
    {
        printf("\n0. Rock\n1. Paper\n2. Scissors\n3. Quit\n");
        printf("Choose: ");

        if (scanf("%d", &player) != 1 || player < 0 || player > 3)
        {
            printf("Invalid input.\n");
            break;
        }

        if (player == 3)
            break;

        computer = rand() % 3;

        printf("You      : %s\n", name[player]);
        printf("Computer : %s\n", name[computer]);

        if (player == computer)
        {
            printf("Draw!\n");
            draw++;
            fprintf(fp, "Draw\n");
        }
        else if ((player - computer + 3) % 3 == 1)
        {
            printf("You Win!\n");
            pscore++;
            fprintf(fp, "Player Won\n");
        }
        else
        {
            printf("Computer Wins!\n");
            cscore++;
            fprintf(fp, "Computer Won\n");
        }

        printf("\nScore\n");
        printf("Player   : %d\n", pscore);
        printf("Computer : %d\n", cscore);
        printf("Draws    : %d\n", draw);
    }

    fprintf(fp,
            "\nFinal Score\n"
            "Player   : %d\n"
            "Computer : %d\n"
            "Draws    : %d\n",
            pscore, cscore, draw);

    fclose(fp);

    printf("\nGame Over!\n");

    return 0;
}