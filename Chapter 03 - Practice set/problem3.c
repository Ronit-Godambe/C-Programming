#include <stdio.h>

int main()
{
    /*
3. Calculate income tax paid by an employee to the government as per the slabs mentioned below:
            Income Slab         Tax
            2.5 – 5.0L          5%
            5.0L - 10.0L        20%
            Above 10.0L         30%

            Note that there is no tax below 2.5L. Take income amount as an input from the user.
            */

    float i;
    printf("Enter income:");

    float taxrate1, taxrate2, taxrate3;
    taxrate1 = 0.05;
    taxrate2 = 0.20;
    taxrate3 = 0.30;

    float incometax1, incometax2, incometax3;

    /*
    Income Slab         Tax
    2.5 – 5.0L          5%
    5.0L - 10.0L        20%
    Above 10.0L         30%


*/

    if (scanf("%f", &i) != 1)
    {

        printf("...INVALID INPUT...");
    }
    else if (i <= 0)
    {
        incometax1 = (i - 250000) * taxrate1;
        incometax2 = ((i - 500000) * taxrate2) + (250000 * taxrate1);
        incometax3 = ((i - 1000000) * taxrate3) + (250000 * taxrate1) + (500000 * taxrate2);
        printf("...INVALID INPUT...");
    }

    else if (i <= 250000 && i > 0)
    {
        incometax1 = (i - 250000) * taxrate1;
        incometax2 = ((i - 500000) * taxrate2) + (250000 * taxrate1);
        incometax3 = ((i - 1000000) * taxrate3) + (250000 * taxrate1) + (500000 * taxrate2);
        printf("You need not pay any income tax");
    }
    else if (i > 250000 && i < 500000)
    {
        incometax1 = (i - 250000) * taxrate1;
        incometax2 = ((i - 500000) * taxrate2) + (250000 * taxrate1);
        incometax3 = ((i - 1000000) * taxrate3) + (250000 * taxrate1) + (500000 * taxrate2);
        printf("Your tax rate is 5 %%. \n So your income tax will be %.2f", incometax1);
    }
    else if (i >= 500000 && i < 1000000)
    {
        incometax1 = (i - 250000) * taxrate1;
        incometax2 = ((i - 500000) * taxrate2) + (250000 * taxrate1);
        incometax3 = ((i - 1000000) * taxrate3) + (250000 * taxrate1) + (500000 * taxrate2);
        printf("Your tax rate is 20 %%. \n So your income tax will be %.2f", incometax2);
    }
    else if (i >= 1000000)
    {
        incometax1 = (i - 250000) * taxrate1;
        incometax2 = ((i - 500000) * taxrate2) + (250000 * taxrate1);
        incometax3 = ((i - 1000000) * taxrate3) + (250000 * taxrate1) + (500000 * taxrate2);
        printf("Your tax rate is 30 %%. \n So your income tax will be %.2f", incometax3);
    }

    return 0;
}