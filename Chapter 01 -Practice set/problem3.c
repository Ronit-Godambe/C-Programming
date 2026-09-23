/*
3. Write a program to convert Celsius (Centigrade degrees temperature to
Fahrenheit).
*/

#include <stdio.h>

int main()
{
    int c;
    printf("This program is for converting degree celcius to degree fahrenhiet\n");

    printf("temp. in celcius:");
    scanf("%d", &c);

    printf("temp. in fahrenhiet: %f", (9.0 / 5.0) * c + 32);

    return 0;
}