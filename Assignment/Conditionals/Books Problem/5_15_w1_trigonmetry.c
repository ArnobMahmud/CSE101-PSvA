/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    double x;
    char T;

    printf("Enter trigonmetric function with angle in radian : \n");
    scanf("%c %lf", &T, &x);

    switch (T)
    {
    case 'S':
    case 's':
        printf("Value is : %.2lf\n", sin(x));
        break;
    case 'C':
    case 'c':
        printf("Value is : %.2lf\n", cos(x));
        break;
    case 'T':
    case 't':
        printf("Value is : %.2lf\n", tan(x));
        break;

    default:
        printf("Invalid input.\n");
    }

    return 0;
}
