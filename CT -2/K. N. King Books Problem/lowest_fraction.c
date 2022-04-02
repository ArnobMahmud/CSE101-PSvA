/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int m, n, nume_gcd, deno_gcd, gcd;

    printf("Enter a fractional number (m/n) : ");
    scanf("%d %d", &m, &n);

    for (int i = 1; i <= m; i++)
    {
        if (m % i == 0 && n % i == 0)
        {
            gcd = i;
        }
    }

    printf("Lowest term is %d/%d", m / gcd, n / gcd);

    return 0;
}
