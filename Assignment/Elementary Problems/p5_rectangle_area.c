/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    double l, w, area;

    printf("Enter the length of rectangle :\n");
    scanf("%lf", &l);

    printf("Enter width of rectangle  : \n");
    scanf("%lf", &w);

    area = l * w;
    printf("Area of the reactangle is : %.2lf", area);

    return 0;
}
