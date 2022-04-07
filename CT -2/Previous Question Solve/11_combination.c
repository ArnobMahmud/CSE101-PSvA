/*  Qn :
    Write a program to find the value of nCr.

            Sample Input        Sample Output
               10 3                  120
               5 0                    1
*/

/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, r, fact_n = 1, fact_r = 1, fact_n_r = 1, nCr;

    scanf("%d %d", &n, &r);

    for (int i = 1; i <= n; i++)
    {
        fact_n *= i;
    }

    for (int j = 1; j <= r; j++)
    {
        fact_r *= j;
    }

    for (int k = 1; k <= n - r; k++)
    {
        fact_n_r *= k;
    }

    nCr = fact_n / (fact_r * fact_n_r);

    printf("%d", nCr);

    return 0;
}
