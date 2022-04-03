/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int ll, ul, rem, temp, sum, fact;

    scanf("%d %d", &ll, &ul);

    for (int i = ll; i <= ul; i++)
    {
        temp = i;
        sum = 0;

        while (temp != 0)
        {
            fact = 1;

            rem = temp % 10;
            for (int i = 1; i <= rem; i++)
            {
                fact *= i;
            }

            sum += fact;
            temp /= 10;
        }

        if (sum == i)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
