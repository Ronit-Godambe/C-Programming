#include <stdio.h>
int main()
{

    for (int i = 0; i < 500; i++){
        // suppose we want to skip 10
        if (i == 10){
            continue;
        }

        // this loop prints numbers which go upto 500
        // to stop it at 100 we use break statement

        if (i == 101){
            break;
        }

        printf("%d\n", i);
    }

    return 0;
}