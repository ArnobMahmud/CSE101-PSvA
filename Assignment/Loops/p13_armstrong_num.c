/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int n, temp, rem, res, count;

    printf("Enter a number : ");
    scanf("%d", &n);

    count = 0;
    temp = n;
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

    if (res != n)
    {
        printf("Not Armstrong.\n");
    }
    else
    {
        printf("Armstrong.\n");
    }

    return 0;
}