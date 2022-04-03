/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    char T;
    double x;

    printf("Enter trigonmetric function with angle in radian :\n");
    scanf("%c %lf", &T, &x);

    if (T == 'S' || T == 's')
    {
        printf("Value of sin(%.0lf) is %.2lf.\n", x, sin(x));
    }
    else if (T == 'C' || T == 'c')
    {
        printf("Value of cos(%.0lf) is %.2lf.\n", x, cos(x));
    }
    else if (T == 'T' || T == 't')
    {
        printf("Value of tan(%.0lf) is %.2lf.\n", x, tan(x));
    }
    else
    {
        printf("Invalid input.\n");
    }

    return 0;
}
