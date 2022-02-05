/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float a, b, x, side;

    printf("Enter value of a:\n");
    scanf("%f", &a);

    printf("Enter value of b:\n");
    scanf("%f", &b);

    printf("Enter value of x in radian:\n");
    scanf("%f", &x);

    side = sqrt(pow(a, 2) + pow(b, 2) - 2 * a * b * cos(x));

    printf("Side is %.2f.\n", side);

    return 0;
}
