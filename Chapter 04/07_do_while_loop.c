#include <stdio.h> 

int main(){
    // ‘do-while’ executes the code & then checks the condition.
    int i = 0;


    do
    {
        printf("This statement is executed - %d\n", i);
        i++;

    } while (i < 10);
    
    
    return 0;
}
