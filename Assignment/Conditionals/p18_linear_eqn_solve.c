/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, c, d, m, n, den;
    float x1, x2;

    printf("Enter the value of a :\n");
    scanf("%d", &a);

    printf("Enter the value of b :\n");
    scanf("%d", &b);

    printf("Enter the value of c :\n");
    scanf("%d", &c);

    printf("Enter the value of d :\n");
    scanf("%d", &d);

    printf("Enter the value of m :\n");
    scanf("%d", &m);

    printf("Enter the value of n :\n");
    scanf("%d", &n);

    den = a * d - c * b;

    if (den != 0)
    {
        x1 = (m * d - b * n) / den;
        printf("Value of x1 is : %.2f.\n", x1);

        x2 = (n * a - m * c) / den;
        printf("Value of x1 is : %.2f.\n", x2);
    }
    else
    {
        printf("Denominator must be non zero.\n");
    }

    return 0;
}
