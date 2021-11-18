/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float a, b, c, s, area;

    printf("Enter the value of the three sides of triangle: \n");
    scanf("%f %f %f", &a, &b, &c);

    s = (a + b + c) / 3;

    area = sqrt((s * (s - a) * (s - b) * (s - c)));

    printf("Area of the tiangle is : %f.", area);

    return 0;
}
