/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int n, fctr, pfc = 0;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        fctr = 0;
        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                fctr += j;
            }
        }
        if (fctr == i)
        {
            printf("%d ", i);
            pfc++;
        }
    }
    printf("\nTotal perfect number : %d", pfc);

    return 0;
}
