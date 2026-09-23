#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("test.txt", "r");
    /*
    "r" -> open for reading
    "rb" -> open for reading in binary
    "w" -> open for writing // If the file exists, the contents will be overwritten
    "wb" -> open for writing in binary
    "a" -> open for append // If the file does not exist, it will be created
     */
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