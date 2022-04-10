/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int P, n;
    float V, r;

    for (P = 1000, r = 0.1, n = 1; P <= 10000, r <= 0.20, n <= 10; P += 1000, r += 0.01, n++)
    {
        V = P * pow((1 + r), n);

        printf("P = %d\tr = %.2f\tn = %d\tV = %.3f\n", P, r, n, V);
    }

    return 0;
}
