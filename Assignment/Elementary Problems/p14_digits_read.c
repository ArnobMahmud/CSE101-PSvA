/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    int a, b, c, d, sum;

    printf("Enter a 4 digits of integer number : \n");
    scanf("%d", &num);

    a = (num / 1) % 10;
    b = (num / 10) % 10;
    c = (num / 100) % 10;
    d = (num / 1000) % 10;

    sum = a + b + c + d;

    printf("Sum of the digits : %d.\n", sum);

    return 0;
}
