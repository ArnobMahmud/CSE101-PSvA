/*  Qn :
    Write a C program to input electricity unit charge and calculate the total
    electricity bill according to the given condition:

    For first 50 units Tk. 0.50/unit
    For next 100 units Tk. 0.75/unit
    For next 100 units Tk. 1.20/unit
    For unit above 250 Tk. 1.50/unit

            Sample input                Sample output
                1800                       2545.00
                220                         184.00
*/

/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float units, bills;

    scanf("%f", &units);

    if (units <= 50)
    {
        bills = units * 0.50;
    }
    else if (units <= 150)
    {
        bills = 50 * 0.50 + (units - 50) * 0.75;
    }
    else if (units <= 250)
    {
        bills = 50 * 0.50 + 100 * 0.75 + (units - 150) * 1.20;
    }
    else
    {
        bills = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (units - 250) * 1.50;
    }

    printf("%.2f", bills);

    return 0;
}
