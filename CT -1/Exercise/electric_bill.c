/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#define MIN_CHARGE 100
#define SUR_CHARGE 0.15

int main(int argc, char const *argv[])
{

    char name[20];
    float unit, bill, extdbill;

    printf("Enter your name :\n");
    scanf("%s", &name);

    printf("Enter using unit :\n");
    scanf("%f", &unit);

    if (unit <= 200)
    {
        bill = MIN_CHARGE + 0.80 * unit;
        printf("%s your total electric bill is %.2f.\n", name, bill);
    }
    else if (unit <= 300)
    {
        bill = MIN_CHARGE + 0.90 * unit;
        printf("%s your total electric bill is %.2f.\n", name, bill);
    }
    else
    {
        bill = MIN_CHARGE + 1.00 * unit;
        if (bill > 400)
        {
            extdbill = bill * SUR_CHARGE;
            bill += extdbill;
            printf("%s your total electric bill is %.2f.\n", name, bill);
        }
        else
        {
            printf("%s your total electric bill is %.2f.\n", name, bill);
        }
    }

    return 0;
}
