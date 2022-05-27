/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>

void main(int argc, char const *argv[])
{
    int n, rem, ll, ul, temp, sum, count, arc = 0;

    printf("Enter lower limit : ");
    scanf("%d", &ll);

    printf("Enter upper limit : ");
    scanf("%d", &ul);

    for (int i = ll; i <= ul; i++)
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
            arc++;
            printf("%d ", i);
        }
    }

    printf("\nTotal armstrong number : %d", arc);
}
