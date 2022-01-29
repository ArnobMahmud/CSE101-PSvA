/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>
#define PI 3.1421

int main(int argc, char const *argv[])
{
    double x, rad;
    char T;

    printf("Enter trigonmetric function with angle in radian : \n");
    scanf("%c %lf", &T, &x);

    rad = x * (PI / 180);

    switch (T)
    {
    case 'S':
        printf("Value is : %lf\n", sin(rad));
        break;
    case 'C':
        printf("Value is : %lf\n", cos(rad));
        break;
    case 'T':
        printf("Value is : %lf\n", tan(rad));
        break;

    default:
        printf("Invalid input.\n");
    }

    return 0;
}
