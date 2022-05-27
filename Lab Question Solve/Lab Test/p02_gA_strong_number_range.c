/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>

int factorial(int num)
{
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    return fact;
}

int is_strong(int sum, int n)
{
    if (sum == n)
    {
        return 1;
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    int ll, ul, temp, rem, fact, bin, sum;

    scanf("%d %d", &ll, &ul);

    for (int i = ll; i <= ul; i++)
    {
        temp = i;
        sum = 0;
        while (temp != 0)
        {
            rem = temp % 10;
            fact = factorial(rem);
            sum += fact;
            temp /= 10;
        }

        if (is_strong(sum, i) == 1)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
