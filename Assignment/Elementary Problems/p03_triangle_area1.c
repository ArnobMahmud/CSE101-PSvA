/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int b, h;
    float area;

    printf("Enter the base of triangle :\n");
    scanf("%d", &b);

    printf("Enter height of triangle  : \n");
    scanf("%d", &h);

    area = 0.5 * b * h;

    printf("Area is %.3f.\n", area);

    return 0;
}
