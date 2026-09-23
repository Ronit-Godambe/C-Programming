#include <stdio.h>

/* 
9. Write a structure capable of storing date. Write a function to compare those 
dates.
*/
struct date
{
    int dd;
    int mm;
    int yyyy;
};

int datecompare(struct date date1, struct date date2);
int datecompare(struct date date1, struct date date2)
{
    // if ((date1.yyyy == date2.yyyy) && (date1.mm == date2.mm) && (date1.dd == date2.dd))
    // {
    //     return 0;
    // }

// No need of this above thing cuz if none of the below statements work the function itself will return zreo

    if(date1.yyyy > date2.yyyy){
        return 1;
    }
    else if(date1.yyyy < date2.yyyy){
        return -1;
    }
    
    else if(date1.mm > date2.mm){
        return 1;
    }
    else if(date1.mm < date2.mm){
        return -1;
    }
    else if(date1.dd > date2.dd){
        return 1;
    }
    else if(date1.dd < date2.dd){
        return -1;
    }

    return 0;
}
int main()
{
    // date1 is greater than date2 - returns 1
    struct date date1 = {02, 10, 2008};
    struct date date2 = {15, 10, 1979};

    printf("%d\n", datecompare(date1, date2));
    
    // date4 is greater than date3 - returns -1
    struct date date3 = {02, 10, 2008};
    struct date date4 = {15, 10, 2026};

    printf("%d\n", datecompare(date3, date4));

     // date5 is equal to date6 - returns 0
    struct date date5 = {02, 10, 2008};
    struct date date6 = {02, 10, 2008};

    printf("%d      - // same dates!\n", datecompare(date5, date6));

    return 0;
}