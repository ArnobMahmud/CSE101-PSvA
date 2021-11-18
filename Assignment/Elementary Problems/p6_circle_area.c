/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main(int argc, char const *argv[])
{
    double r, area;

    printf("Enter the radius of circle :\n");
    scanf("%lf", &r);

    area = PI * pow(r, 2);
    printf("Area of the circle is : %.2lf", area);

    return 0;
}
