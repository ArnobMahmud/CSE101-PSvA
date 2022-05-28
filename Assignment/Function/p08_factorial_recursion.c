/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

long long int factorial(long long int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int main(int argc, char const *argv[])
{
    long long int n;
    scanf("%lld", &n);

    printf("Factorial of %lld is : %lld", n, factorial(n));

    return 0;
}
