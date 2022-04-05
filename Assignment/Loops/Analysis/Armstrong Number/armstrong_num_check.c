/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int n, count, temp, rem, sum;

    scanf("%d", &n);

    temp = n;
    while (temp != 0)
    {
        temp /= 10;
        count++;
    }

    temp = n;
    sum = 0;
    while (temp != 0)
    {
        rem = temp % 10;
        sum += pow(rem, count);
        temp /= 10;
    }

    if (sum == n)
    {
        printf("%d is an armstrong number.", n);
    }
    else
    {
        printf("%d is not an armstrong number.", n);
    }

    return 0;
}
