/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float m, a, h, v, e;

    printf("Enter mass :\n");
    scanf("%f", &m);

    printf("Enter accelaration :\n");
    scanf("%f", &a);

    printf("Enter height :\n");
    scanf("%f", &h);

    printf("Enter velocity :\n");
    scanf("%f", &v);

    e = m * (a * h + (pow(v, 2) / 2));

    printf("Energy is %.2f.\n", e);

    return 0;
}
