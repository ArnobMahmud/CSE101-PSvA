/*  Qn :
    Write a c program to input the values of x (-1 < x < 1) and N,
    and print the difference between LHS and RHS of the 
    following Maclaurin series:

        (1 − 𝑥)^-1 =  1 + 𝑥 + 𝑥^2+ 𝑥^3+ ... + 𝑥^𝑁

            Sample Input          Sample Output
               0.2   3              0.002000
               0.2  10              0.000000
*/

/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int n;
    float x, lhs = 0, rhs = 0, diff;

    scanf("%f %d", &x, &n);

    lhs = 1.0 / (1 - x);

    for (int i = 0; i <= n; i++)
    {
        rhs += pow(x, i);
    }

    diff = lhs - rhs;
    printf("%f", diff);

    return 0;
}
