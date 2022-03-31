/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float cost, min_cost = 0, min_p = 0;

    min_cost = 40 - 8 * min_p + min_p * min_p;

    for (float p = 0.1; p <= 10; p += 0.1)
    {
        cost = 40 - 8 * p + p * p;

        if (cost < min_cost)
        {
            min_cost = cost;
            min_p = p;
        }
    }

    printf("Minimum cost = %.2f\nMinimum p = %.2f", min_cost, min_p);

    return 0;
}
