/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int ll, ul, temp, rem, res, fact, strc = 0;

    printf("Enter lower limit : ");
    scanf("%d", &ll);

    printf("Enter upper limit : ");
    scanf("%d", &ul);

    for (int i = ll; i <= ul; i++)
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