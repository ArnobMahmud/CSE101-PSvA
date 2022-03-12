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
    int N, fact, count = 0, temp, rem, res;

    printf("Enter Nth number : ");
    scanf("%d", &N);

    for (int i = 1; i > 0; i++)
    {
        temp = i;
        res = 0;
        while (temp != 0)
        {
            rem = temp % 10;

            fact = 1;
            for (int i = 1; i <= rem; i++)
            {
                fact *= i;
            }

            res += fact;
            temp /= 10;
        }

        if (res == i)
        {
            count++;
            printf("%d ", i);
        }

        if (count == N)
        {
            printf("\n%dth strong number is : %d", N, i);
            break;
        }
    }

    return 0;
}
