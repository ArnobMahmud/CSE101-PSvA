/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int n, temp, rem, res = 0, fact;

    printf("Enter a number : ");
    scanf("%d", &n);

    temp = n;
    while (temp != 0)
    {
        rem = temp % 10;

        fact = 1;
        for (int i = 1; i <= rem; i++)
        {
            fact *= i;
        }

        res += fact;
        temp /= 10;
    }

    if (res != n)
    {
        printf("Not Strong.\n");
    }
    else
    {
        printf("Strong.\n");
    }
}