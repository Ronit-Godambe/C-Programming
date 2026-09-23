#include <stdio.h>

int main()
{
    // we can use %s in scanf too it automatically adds null character  when the enter key is pressed.
    char str1[50];

    printf("str1: ");
    scanf("%s", &str1);
    printf("%s", str1);

    // scanf cant take multi-word strings with spaces
    // string should be short enough to fit in the array
    return 0;
}