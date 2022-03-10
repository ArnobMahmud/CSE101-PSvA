/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int n, count, res, rem, temp;

    printf("Enter a num : ");
    scanf("%d", &n);

    temp = n;
    count = 0;
    while (temp != 0)
    {
        temp /= 10;
        count++;
    }

    temp = n;
    res = 0;
    while (temp != 0)
    {
        rem = temp % 10;
        res += pow(rem, count);
        temp /= 10;
    }

    if (n == res)
    {
        printf("%d is an Armstrong Number.", res);
    }
    else
    {
        printf("%d is not an Armstrong Number.", n);
    }

    return 0;
}
