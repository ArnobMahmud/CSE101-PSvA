/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int N, count, rem, temp, res, arc = 0;

    printf("Enter Nth number : ");
    scanf("%d", &N);

    for (int i = 1; i > 0; i++)
    {
        temp = i;
        count = 0;
        while (temp != 0)
        {
            count++;
            temp /= 10;
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
            arc++;
            printf("%d ", i);
        }

        if (N == arc)
        {
            printf("\n%dth armstrong number is : %d", N, i);
            break;
        }
    }
    return 0;
}
