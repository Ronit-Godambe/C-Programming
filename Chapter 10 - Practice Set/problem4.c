#include <stdio.h>
/*
    4. Take name and salary of two employees as input from the user and write them to
    a text file in the following format:
        i. Name1, 3300
        ii. Name2, 7700

*/
int main()
{
    FILE *ptr;
    int n;
    char name[34];
    int salary;

    ptr = fopen("test4.txt", "w");

    printf("No of employees: ");

    if (scanf("%d", &n) != 1)
    {
        printf("...INVALID INPUT...");
        return 0;
    }
    getchar();
    for (int i = 0; i < n; i++)
    {
        printf("Employee %d \n" , i + 1);

        printf("Employee %d Name: ", i + 1);
        fgets(name, 20, stdin);

        for (int i = 0; name[i] != '\0'; i++)  //---------|
        {                                      //---------|
            if(name[i] == '\n'){               //---------|--------Just to remove '/n' from the name   (o_o)
                name[i] = '\0' ;               //---------|
            }                                  //---------|
        }                                       
               
        printf("Employee %d salary: ", i + 1);
        
        if (scanf("%d", &salary) != 1)
        {
            printf("...INVALID INPUT...");
            return 0;
        }
        
        getchar();
        printf("\n");

        fprintf(ptr, "%s, %d\n", name, salary);
    }
    fclose(ptr);

    return 0;
}