/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#define METER_CHARGE 100
#define SUR_CHARGE 0.15

int main(int argc, char const *argv[])
{
    char name[20];
    float units, bills, sum_bills;

    printf("Enter your name :\n");
    scanf("%s", &name);

    printf("Enter units :\n");
    scanf("%f", &units);

    if (units < 0)
    {
        printf("Invalid input.\n");
    }
    else if (units <= 200)
    {
        bills = units * .8;
    }
    else if (units <= 300)
    {
        bills = 200 * .8 + (units - 200) * .9;
    }
    else
    {
        bills = 200 * .8 + 100 * .9 + (units - 300) * 1.00;
    }

    sum_bills = METER_CHARGE + bills;
    if (sum_bills > 400)
    {
        sum_bills += sum_bills * SUR_CHARGE;
    }

    printf("%s your bill is %.0f.\n", name, sum_bills);

    return 0;
}
