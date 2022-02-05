/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>
#define PI 3.142

int main(int argc, char const *argv[])
{
    float r, h, area;
    printf("Enter the value of r & h :\n");
    scanf("%f %f", &r, &h);

    area = PI * pow(r, 2) + 2 * PI * r * h;
    printf("Area is %.2f.\n", area);
    return 0;
}
