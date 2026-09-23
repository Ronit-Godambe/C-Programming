
#include <stdio.h>

int main()
{

    /*
    2. Write a program to determine whether a student has passed or failed. To pass, a
    student requires a total of 40% and at least 33% in each subject. Assume there
    are three subjects and take the marks as input from the user.
    */

    int p, c, m, totalmarks; 
    float totalpercentage;
    printf("Marks in Physics: ");
    scanf("%d", &p);

    printf("Marks in Chemistry: ");
    scanf("%d", &c);

    printf("Marks in Mathematics: ");
    scanf("%d", &m);

    totalmarks = p + c + m;
    totalpercentage = ((p + c + m) / 300.0) * 100;

    // REAL HELL BEGINS NOW hehe

    if (p > 100 || c > 100 || m > 100 || p < 0 || c < 0 || m < 0 )
    {
        printf("...INVALID MARKS...");
    }

    else if (totalpercentage >= 40 && p >= 33 && c >= 33 && m >= 33)
    {
        printf("Percentage in physics: %d %%\n ", p);
        printf("Percentage in Chemistry: %d %%\n", c);
        printf("Percentage in Mathematcs: %d %%\n", m);
        printf("\nTotal Marks = %d\n", totalmarks);
        printf("\nOverall Percentage: %.2f %%", totalpercentage);
        printf("\n YOU PASSED!!\n");
    }

    // else if (totalpercentage < 40 || p < 33 || c < 33 || m < 33)
    // {
    //     printf("\nPercentage in physics: %d %%\n", p);
    //     printf("Percentage in Chemistry: %d %%\n", c);
    //     printf("Percentage in Mathematcs: %d %%\n", m);
    //     printf("\nTotal Marks = %d\n", totalmarks);
    //     printf("\nOverall Percentage: %.2f %%", totalpercentage);
    //     printf("\n YOU FAILED (DUMBO)\n");
    // }

    else{
         printf("\nPercentage in physics: %d %%\n", p);
        printf("Percentage in Chemistry: %d %%\n", c);
        printf("Percentage in Mathematcs: %d %%\n", m);
        printf("\nTotal Marks = %d \n", totalmarks);
        printf("\nOverall Percentage: %.2f %%", totalpercentage);
        printf("\n YOU FAILED (DUMBO)");
    }
    return 0;
}