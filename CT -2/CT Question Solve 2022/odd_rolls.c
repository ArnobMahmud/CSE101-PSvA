/*  Qn :
     Write a c program to input the value of N and print
     the sum of the following series:

                2^−1 + 2^−2 + 2^−3 + ... + 2^-N

            Sample Input            Sample Output
                10                     0.999023
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
    float sum = 0;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum += 1.0 / pow(2, i);
    }
    printf("%f", sum);

    return 0;
}
