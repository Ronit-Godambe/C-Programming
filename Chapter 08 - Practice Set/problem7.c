#include <stdio.h>
void decrypt(char str[]);
void decrypt(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        str[i]--;
    }
}
int main()
{
    char str[] = "Spoju!Hpebncf";

    decrypt(str);
    printf("%s", str);
    return 0;
}
