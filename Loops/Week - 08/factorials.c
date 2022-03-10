/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, fact = 1;

    printf("Enter N : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }

    printf("Factorial of %d is %d.", n, fact);

    return 0;
}
