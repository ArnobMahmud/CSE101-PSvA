/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int n, temp, rem, ll, ul, res, count;

    printf("Enter lower limit : ");
    scanf("%d", &ll);

    printf("Enter upper limit : ");
    scanf("%d", &ul);

    for (int i = ll; i <= ul; i++)
    {
        temp = i;
        count = 0;
        while (temp != 0)
        {
            temp /= 10;
            count++;
        }

        temp = i;
        res = 0;
        while (temp != 0)
        {
            rem = temp % 10;
            res += pow(rem, count);
            temp /= 10;
        }

        if (res == i)
        {
            printf("%d ", i);
        }
    }
    return 0;
}