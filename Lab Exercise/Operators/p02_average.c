/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float a, b, avg;

    printf("Enter two numbers : ");
    scanf("%f %f", &a, &b);

    avg = (a + b) / 2;

    printf("Average is %.2f", avg);

    return 0;
}
