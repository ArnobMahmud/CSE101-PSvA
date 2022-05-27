/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int n, temp, rem, res, fact, strc = 0;

    printf("Enter n : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        temp = i;
        res = 0;
        while (temp != 0)
        {
            rem = temp % 10;

            fact = 1;
            for (int j = 1; j <= rem; j++)
            {
                fact *= j;
            }

            res += fact;
            temp /= 10;
        }

        if (res == i)
        {
            strc++;
            printf("%d ", i);
        }
    }

    printf("\nTotal strong number %d", strc);

    return 0;
}