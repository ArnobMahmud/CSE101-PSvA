/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>

void main(int argc, char const *argv[])
{
    int n, a = 0, b = 1, c, temp, sum = 0;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d ", a);

        c = a + b;
        sum += a;

        a = b;
        b = c;
    }

    printf("\nSum is %d.", sum);
}