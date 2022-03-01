/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#define SURCHARGE 0.20

int main(int argc, char const *argv[])
{
    float units, bills;

    scanf("%f", &units);

    if (units <= 50)
    {
        bills = units * .5;
    }
    else if (units <= 150)
    {
        bills = 50 * .5 + (units - 50) * 0.75;
    }
    else if (units <= 250)
    {
        bills = 50 * .5 + 100 * 0.75 + (units - 150) * 1.20;
    }
    else
    {
        bills = 50 * .5 + 100 * 0.75 + 100 * 1.20 + (units - 250) * 1.50;
        bills += bills * SURCHARGE;
    }

    printf("Bill is %.2f\n", bills);

    return 0;
}
