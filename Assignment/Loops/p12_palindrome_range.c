/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int n, temp, ll, ul, rem, res, count;

    printf("Enter lower limit : ");
    scanf("%d", &ll);

    printf("Enter upper limit : ");
    scanf("%d", &ul);

    for (int i = ll; i <= ul; i++)
    {
        count = 0;
        temp = i;
        res = 0;

        while (temp != 0)
        {
            rem = temp % 10;
            res = res * 10 + rem;
            temp /= 10;
        }

        if (res == i)
        {
            printf("%d ", res);
        }
    }
    return 0;
}