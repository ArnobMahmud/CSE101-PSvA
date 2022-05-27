/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float a, b, c, avg;

    printf("Enter three numbers : ");
    scanf("%f %f %f", &a, &b, &c);

    avg = (a + b + c) / 3;

    printf("Average is %.2f", avg);

    return 0;
}
