/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>

    float seriesSum(int r, int n)
{
    int a = 5;
    float sum;
    for (int i = 1; i <= n; i++)
    {
        sum += (a * pow(r, (i - 1)));
    }

    return sum;
}

int main(int argc, char const *argv[])
{
    int r, n;
    scanf("%d %d", &r, &n);

    printf("%.2f", seriesSum(r, n));

    return 0;
}
