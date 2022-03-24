/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, fact;
    float e = 0;

    printf("Enter N : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        fact = 1;
        for (int j = 1; j <= i; j++)
        {
            fact *= j;
        }
        e += (1.0 / fact);
    }

    printf("Eulers value upto %d is : e = %.2f", n, 1 + e);

    return 0;
}
