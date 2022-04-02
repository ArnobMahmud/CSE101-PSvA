/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int m, n, gcd;

    printf("Enter two number : ");
    scanf("%d %d", &m, &n);

    for (int i = 1; i <= m; i++)
    {
        if (m % i == 0 && n % i == 0)
        {
            gcd = i;
        }
    }

    printf("GCD is %d.", gcd);

    return 0;
}
