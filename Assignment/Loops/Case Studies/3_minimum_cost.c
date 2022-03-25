/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>
#define MINPARAMETER 0

void main(int argc, char const *argv[])
{
    float terminalParameter, cost, min_cost;

    min_cost = 40 - 8 * MINPARAMETER + MINPARAMETER * MINPARAMETER;

    for (float i = 0.1; i <= 10; i += 0.1)
    {
        cost = 40 - 8 * i + pow(i, 2);
        if (cost < min_cost)
        {
            min_cost = cost;
            terminalParameter = i;
        }
        else
        {
            break;
        }
    }

    printf("Terminal parameter is %.2f\n", terminalParameter);
    printf("Minimum cost is %.2f\n", min_cost);
}
