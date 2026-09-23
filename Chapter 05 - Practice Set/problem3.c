#include <stdio.h>

/*
3. Write a function to calculate force of attraction on a body of mass ‘m’ exerted by
earth. Consider g = 9.8m/s2
*/
float force(float);
float force(float m){
    return m * 9.8;
}
int main()
{
    float m;
    printf("This progrram is to find force of attraction on a body of mass 'm' exerted by earth. (where g = 9.8) \n");

    printf("Enter mass = ");
    if (scanf("%d", &m) != 1 || m <= 0){
        printf("...INVALD INPUT...");
        return 0;
    }
    printf("froce = %.2f N", force(m));

    return 0;
}