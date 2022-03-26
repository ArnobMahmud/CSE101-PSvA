/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>
#define PI 3.1416

    double sphereRadius(float area)
{
    double rad;
    rad = 0.5 * sqrt(area / PI);

    return rad;
}

int main(int argc, char const *argv[])
{
    double A;
    scanf("%lf", &A);

    printf("%.3lf", sphereRadius(A));

    return 0;
}
