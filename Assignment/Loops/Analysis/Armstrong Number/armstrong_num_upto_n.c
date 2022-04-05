/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int i, n, rem, temp, count, sum, arc = 0;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        temp = i;
        count = 0;
        while (temp != 0)
        {
            temp /= 10;
            count++;
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
            printf("%d ", i);
            arc++;
        }
    }

    printf("\nTotal armstrong number : %d", arc);

    return 0;
}
