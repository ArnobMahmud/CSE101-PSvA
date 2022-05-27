/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>

void main(int argc, char const *argv[])
{
    int i, n, rem, temp, sum, count, amc = 0;

    printf("Enter n : ");
    scanf("%d", &n);

    i = 1;
    while (amc != n)
    {
        count = 0;
        temp = i;
        while (temp != 0)
        {
            count++;
            temp /= 10;
        }

        temp = i;
        sum = 0;
        while (temp != 0)
        {
            rem = temp % 10;
            sum += pow(rem, count);
            temp /= 10;
        }

        if (sum == i)
        {
            amc++;
            printf("%d ", i);
        }
        i++;
    }

    printf("\n%dth armstrong number %d", n, i - 1);
}
