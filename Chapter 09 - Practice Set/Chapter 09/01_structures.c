#include <stdio.h> 
#include <string.h> 
struct structure_01
{
    char yourname[10];
    int yournumber;
    float yourheight;
};

int main(){
    struct structure_01 s1;
    strcpy(s1.yourname, "Ronit");
    s1.yournumber = 49;
    s1.yourheight = 49.13;

    printf("Your Name: %s\nYour Number: %d\nYour Height: %f", s1.yourname, s1.yournumber, s1.yourheight);

    return 0;
}