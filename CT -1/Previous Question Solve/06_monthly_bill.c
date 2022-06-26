/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#define DEMAND_CHARGE 50
#define VAT 0.05

int main(int argc, char const *argv[])
{
    float units, bills;

    printf("Enter consumesd units :\n");
    scanf("%f", &units);

    if (units <= 75)
    {
        bills = DEMAND_CHARGE + units * 4;
    }
    else if (units <= 200)
    {
        bills = 75 * 4 + ((units - 75) * 5.45);
    }
    else if (units <= 300)
    {
        bills = 75 * 4 + 125 * 5.45 + ((units - 200) * 5.7);
    }
    else if (units <= 400)
    {
        bills = 75 * 4 + 125 * 5.45 + 100 * 5.7 + ((units - 300) * 6.02);
    }
    else if (units <= 600)
    {
        bills = 75 * 4 + 125 * 5.45 + 100 * 5.7 + 100 * 6.02 + ((units - 400) * 9.3);
    }
    else
    {
        bills = 75 * 4 + 125 * 5.45 + 100 * 5.7 + 100 * 6.02 + 200 * 9.3 + ((units - 600) * 10.7);
    }
    
    bills += DEMAND_CHARGE;
    bills += bills * VAT;

    printf("Bills is %.0f.\n", bills);

    return 0;
}
