/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int num, rem, temp, sum = 0, fact;

    scanf("%d", &num);

    temp = num;
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

    if (sum == num)
    {
        printf("%d is a strong number.", num);
    }
    else
    {
        printf("%d is not a strong number.", num);
    }

    return 0;
}
