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
    int n, k, n_k, fact_n = 1, fact_k = 1, fact_n_k = 1, nCr;
    scanf("%d %d", &n, &k);

    for (int i = 1; i <= n; i++)
    {
        fact_n *= i;
    }

    for (int i = 1; i <= k; i++)
    {
        fact_k *= i;
    }

    for (int i = 1; i <= (n - k); i++)
    {
        fact_n_k *= i;
    }

    nCr = fact_n / (fact_k * fact_n_k);
    printf("%d", nCr);

    return 0;
}
