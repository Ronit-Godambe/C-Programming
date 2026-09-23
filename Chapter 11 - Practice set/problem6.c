#include <stdio.h>
#include <stdlib.h>
/*

6. Attempt problem 4 using calloc().
            4. Create an array dynamically capable of storing 5 integers. Now use realloc so
            that it can now store 10 integers.
*/
int main()
{
    int n = 5;

    int *ptr = (int *) calloc(n, sizeof(int));
    ptr[0] = 1;
    ptr[1] = 2;
    ptr[2] = 3;
    ptr[3] = 4;
    ptr[4] = 5;

    // ptr = (int *)realloc(ptr, 10 * sizeof(int));
    int *temp = realloc(ptr, 10 * sizeof(int));
    /*
      If we write ptr = realloc(ptr, .....).
      And if somehow ptr fails, it returns NULL and we lose the previously allocated memories to the ptr.
      That's the reason we use temp, if anything happens it happens to temp, and our ptr is safe with us.
    */

    if (temp != NULL)
    {
        ptr = temp;
    }
    ptr[5] = 6;
    ptr[6] = 7;
    ptr[7] = 8;
    ptr[8] = 9;
    ptr[9] = 10;

    // Some extra work:
    printf("The values stored in your array are: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("ptr[%d] = %d\n", i, ptr[i]);
    }

    free(ptr);
    return 0;
    // THIS LAST PROBLEM OF THE WHOLE HANDBOOK WAS EXPECTED TO B EASY BUT IT WAS REALLY REALLY HARD
    // I had to find problem 4 click on it copy the code from problem 4 come back to problem 6 paste it there find malloc replace it with calloc, then remove the * and replace it with a ','
    // Thank you harry for such a hard problem!
}