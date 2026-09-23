#include <stdio.h>

/*
3. Write your own version of strlen function from <string.h> 
*/
char bruh(char str[]);
char bruh(char str[]){
    int i = 0;
    while(str[i]!='\0'){
        i++;
    }
    
    return i;
}
int main(){
    
    char str[] = "Harry";
    printf("%d\n", bruh(str));
    
    char str1[] = "Ronit";
    printf("%d\n", bruh(str1));
    
    char str2[] = "Godambe";
    printf("%d\n", bruh(str2));
    return 0;
}

