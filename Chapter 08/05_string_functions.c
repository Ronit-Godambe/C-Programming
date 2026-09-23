#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "Ronit";

    // 1. strlen
    printf("%d \n", strlen(str));

    // 2. strcpy
    char target[30];
    strcpy(target, str);      // Ronit - copied from str - will be stored in target.
    puts(target);             // will print Ronit

     // 3. strcat
    char str1[] = " Godambe"; // add space manually
    strcat(str, str1);        // concatenates - connects - two strings
    puts(str);                // will print Ronit Godamb/*

    // 4. strcmp    
    /*
    0 → Strings are equal.
    Negative value → First string comes before the second alphabetically.
    Positive value → First string comes after the second alphabetically.
    */

    char a[] = "Apple";
    char b[] = "Apple";
    char c[] = "Ronit";
    char d[] = "Godambe";
    printf("a = ");
    puts(a);

    printf("b = ");
    puts(b);

    printf("c = ");
    puts(c);

    printf("d = ");
    puts(d);
printf("When a and b are compared using the strcmp function we get: \n");
    printf("a and b: %d\n", strcmp(a, b));
    printf("c and d: %d\n", strcmp(c, d));
    printf("d and c: %d\n", strcmp(d, c));
 printf("")   
    return 0;
}