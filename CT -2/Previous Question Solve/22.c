/*  Qn :
    The sum of cubes from n to m number is,
        (n+1)^3 + (n+2)^3 + (n+3)^3 + ……+ m^3 = x, where (m > n)
    The cube of sums from n to m number is,
        {(n+1) + (n+2) + (n+3) + …… m}^3 = y
    The difference between two cubes is (x-y)
    Now write down a program and take two integers as the value of n and m,
    and show the difference between two cubes as output.

            Sample input       Sample output
                10 15              -409500
*/

/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int m, n, x = 0, y = 0, res = 0, difc;

    scanf("%d %d", &n, &m);

    for (int i = n; i <= m; i++)
    {
        x += pow(i, 3);
    }

    for (int i = n; i <= m; i++)
    {
        res += i;
        y = pow(res, 3);
    }

    difc = x - y;
    printf("%d", difc);

    return 0;
}
