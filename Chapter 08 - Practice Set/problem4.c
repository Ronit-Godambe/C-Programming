#include <stdio.h> 
char * bruh(char str[], int m, int n);
char * bruh(char str[], int m, int n){
    char *ptr1 = &str[m];
    char *ptr2 = &str[n];
    str = ptr1;
    str[n] = '\0';
    
    return str;
}
int main(){

    char str[] = "Ronit Godambe";

    
    printf("%s\n", bruh(str, 0, 5));
    return 0;
}