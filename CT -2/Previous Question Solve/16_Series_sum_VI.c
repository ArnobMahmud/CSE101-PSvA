/*  Qn :  Write a c program to calculate the sum of the following series upto Nth term:

            1/1 + 1/2! + 1/3 + 1/4! + 1/5 + 1/6! + ...... + 𝑁 𝑡ℎ 𝑡𝑒𝑟𝑚

            Sample Input     Sample Output
                5                2.075
*/

/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{

    int n, fact;
    float sum = 0;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        fact = 1;
        if (i % 2 == 0)
        {
            for (int j = 1; j <= i; j++)
            {
                fact *= j;
            }
            sum += (1.0 / fact);
        }
        else
        {
            sum += (1.0 / i);
        }
    }
    printf("%f", sum);

    return 0;
}
