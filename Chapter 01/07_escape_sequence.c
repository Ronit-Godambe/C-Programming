#include <stdio.h>
int main()
{
    int a;
    char ch = 'a';
    ch = 'c';
    ch = '\n'; // represents a new line
    printf("Hey i am good \nnice\n");       // creates a new line
    printf("Hey i am good \"nice\" \n");    // adds ""
    printf("Hey i am good 'nice'\n");       // can add dingle quotes directly
    printf("Hey i am good \\ nice");        // adds a slash
    printf("Hey i am good \t nice");         // creates a tab '  '

    /*output

    Hey i am good 
    nice
    Hey i am good "nice" 
    Hey i am good 'nice'
    Hey i am good \ nice

    
*/
}