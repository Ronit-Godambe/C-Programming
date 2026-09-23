#include <stdio.h>

float c2f(float);

float c2f(float c){
    return (9.0 / 5.0) * c + 32;
}

/*
2. Write a function to convert Celsius temperature into Fahrenheit.

*/
int main(){
    float celcius;
    printf("This program is to convert Degree celcius into degree farenhiet.\n");

    printf("Temperature in celcius = ");

    if(scanf("%f", &celcius) != 1){
        printf("...INVALID INPUT...");
        return 0;
    }

    printf("Temperature in Fahrenheit = %.2f", c2f(celcius));

    return 0;
}