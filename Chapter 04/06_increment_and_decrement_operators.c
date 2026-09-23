#include <stdio.h> 

int main(){
    int i = 10;
 printf("--i = %d\n", --i);
// Pre-decrement: first decrease i by 1, then use/print the new value.

printf("i-- = %d\n", i--);
// Post-decrement: first use/print the current value, then decrease i by 1.

printf("++i = %d\n", ++i);
// Pre-increment: first increase i by 1, then use/print the new value.

printf("i++ = %d\n", i++);
// Post-increment: first use/print the current value, then increase i by 1.

    return 0;
}