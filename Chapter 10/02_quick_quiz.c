#include <stdio.h>
/*
Quick Quiz: Modify the program above to check whether the file exists or not before
opening the file.
*/
int main()
{
    FILE *ptr;
    ptr = fopen("test.txt", "r");

    if (ptr == NULL)
    {
        printf("Sorry this file does not exist!");
    }

    else
    {

        int num;
        fscanf(ptr, "%d", &num);
        printf("The value of num is %d", num); // 12

        fscanf(ptr, "%d", &num);
        printf("The value of num is %d", num); // 34
    }
    fclose(ptr);

    return 0;
}