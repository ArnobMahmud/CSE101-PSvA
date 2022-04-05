/*
    Qn :            1 2 145 40585
*/

/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int i, j, N, fact, count = 0, temp, rem, res;

    printf("Enter Nth number : ");
    scanf("%d", &N);

    for (i = 1; count != N; i++)
    {
        temp = i;
        res = 0;
        while (temp != 0)
        {
            rem = temp % 10;

            fact = 1;
            for (j = 1; j <= rem; j++)
            {
                fact *= j;
            }

            res += fact;
            temp /= 10;
        }

        if (res == i)
        {
            printf("%d ", i);
            count++;
        }
    }
    printf("\n%dth strong number is : %d", N, i - 1);

    return 0;
}
