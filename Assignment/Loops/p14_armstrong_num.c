/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int n, temp, rem, res = 0;

    printf("Enter a number : ");
    scanf("%d", &n);

    temp = n;

    while (temp != 0)
    {
        rem = temp % 10;
        res += pow(rem, 3);
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
}