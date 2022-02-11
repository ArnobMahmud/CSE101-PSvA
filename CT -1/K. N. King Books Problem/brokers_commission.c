/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float trade, commission;

    printf("Enter the value of trade:\n");
    scanf("%f", &trade);

    if (trade < 2500)
    {
        commission = 30 + 0.017 * trade;
    }
    else if (trade < 6250)
    {
        commission = 56 + 0.0066 * trade;
    }
    else if (trade < 20000)
    {
        commission = 76 + 0.0034 * trade;
    }
    else if (trade < 50000)
    {
        commission = 100 + 0.0022 * trade;
    }
    else if (trade < 500000)
    {
        commission = 155 + 0.0011 * trade;
    }
    else
    {
        commission = 255 + 0.0009 * trade;
    }
    if (commission < 39)
    {
        commission = 39.00;
    }

    printf("Commission is : %.2f USD", commission);

    return 0;
}
