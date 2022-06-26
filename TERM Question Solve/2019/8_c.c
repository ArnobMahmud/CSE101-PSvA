/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int factorial(int num)
{
    int fact = 1;

    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }

    return fact;
}

void main(int argc, char const *argv[])
{
    int n, r, comb;
    scanf("%d %d", &n, &r);

    comb = factorial(n) / (factorial(r) * factorial(n - r));
    printf("%d", comb);
}
