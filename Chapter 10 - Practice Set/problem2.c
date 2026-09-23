#include <stdio.h>
/*
2. Write a program to generate multiplication table of a given number in text
format. Make sure that the file is readable and well formatted.
*/
int main()
{
    int num;
    printf("This program prints multiplication table (upto 10) to a file named test2.txt\n");
    printf("Enter the number whose table you want to print\n");
    printf("Number: ");
    if (scanf("%d", &num) != 1)
    {
        printf("...INVALID INPUT...");
        return 0;
    }

    // char n = '\n';// ------------for earlier version

    FILE *ptr;
    ptr = fopen("test2.txt", "w");
    // ptr = fopen("test2.txt", "a"); // ---- enable if u want multiple tables printed one after another
    
    fprintf(ptr, "Table of %d\n", num);
    // fprintf(ptr, "%c", n);
    for (int i = 0; i < 10; i++)
    {

        fprintf(ptr, "%d x %d = %d\n", num, (i+1), num*(i+1));      // improved with the help of chatgpt!! it works!!!!

       /*  fprintf(ptr, "%d x ", num);
        fprintf(ptr, "%d ", i+1);
        fprintf(ptr, "= %d", num * (i + 1));// -----------forearlier version
        fprintf(ptr, "%c", n); */   
    }
    // fprintf(ptr, "%c", n); // ---- enable if u want to print multiple tables one after another
    fclose(ptr);
    return 0;
}