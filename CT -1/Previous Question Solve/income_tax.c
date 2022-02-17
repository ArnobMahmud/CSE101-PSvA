/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float yearly_income, tax;

    printf("Enter yearly income :\n");
    scanf("%f", &yearly_income);

    if (yearly_income <= 250000)
    {
        tax = 0;
    }
    else if (yearly_income <= 650000)
    {
        tax = 0 + (yearly_income - 250000) * .10;
    }
    else if (yearly_income <= 1150000)
    {
        tax = 0 + 400000 * .10 + (yearly_income - 650000) * .15;
    }
    else if (yearly_income <= 1750000)
    {
        tax = 0 + 400000 * .10 + 500000 * .15 + (yearly_income - 1150000) * .20;
    }
    else if (yearly_income <= 4750000)
    {
        tax = 0 + 400000 * .10 + 500000 * .15 + 600000 * .20 + (yearly_income - 1750000) * .25;
    }
    else
    {
        tax = 0 + 400000 * .10 + 500000 * .15 + 600000 * .20 + 3000000 * .25 + (yearly_income - 4750000) * .30;
    }

    printf("Tax is %.0f.", tax);

    return 0;
}
