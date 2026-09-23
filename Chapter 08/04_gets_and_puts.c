#include <stdio.h>

int main()
{
    char str[30];
    printf("Str = ");
    // gets(str); - gets is not used because it overflows the limit of the array
    // so we use
    fgets(str, 20, stdin);
    puts(str);// it will print 20 characters only - characters includes space
    return 0;

}