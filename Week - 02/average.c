/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

    int main(int argc, char const *argv[])
{
    int a, b, c;
    float avg;

    printf("Enter first number : \n");
    scanf("%d", &a);

    printf("Enter second number : \n");
    scanf("%d", &b);

    printf("Enter third number : \n");
    scanf("%d", &c);

    avg = (a + b + c) / 3.0;
    printf("Average is %.3f.\n", avg);

    return 0;
}
