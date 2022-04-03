/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int ll, ul, rem, count, temp, sum;

    scanf("%d %d", &ll, &ul);

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
        }
    }

    return 0;
}
