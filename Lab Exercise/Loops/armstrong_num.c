/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>

void main(int argc, char const *argv[])
{
    int n, rem, temp, sum = 0, count = 0;

    printf("Enter a number : ");
    scanf("%d", &n);

    temp = n;
    while (temp != 0)
    {
        count++;
        temp /= 10;
    }

    temp = n;
    while (temp != 0)
    {
        rem = temp % 10;
        sum += pow(rem, count);
        temp /= 10;
    }

    if (sum == n)
    {
        printf("%d is Armstrong number", n);
    }
    else
    {
        printf("%d is not Armstrong number", n);
    }
}
