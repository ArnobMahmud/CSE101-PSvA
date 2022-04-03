/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, fact = 1;
    float sum = 0.0;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        fact *= i;
        sum += 1.0 / fact;
    }

    printf("e : %.2f", 1 + sum);

    return 0;
}
