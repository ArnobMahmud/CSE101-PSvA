/*  Qn :
    Write a c program to input the value of N and print the sum of the following series:

                1 + 1/2! + 1/3! + 1/4! + . . . + 1/𝑁!

                        Sample Input     Sample Output
                            7              1.718254
*/

/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int n, fact;
    float sum = 0;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        fact = 1;
        for (int j = 1; j <= i; j++)
        {
            fact *= j;
        }
        sum += (1.0 / fact);
    }

    printf("%f", sum);

    return 0;
}
