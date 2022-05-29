/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

void main(int argc, char const *argv[])
{
    int num, rem, res = 0, a = 1;

    scanf("%d", &num);

    while (num != 0)
    {
        rem = num % 10;

        if (rem % 2 != 0)
        {
            res += (a * rem);
            a *= 10;
        }
        num /= 10;
    }

    if (res != 0)
    {
        printf("%d", res);
    }
    else
    {
        printf("No odd digits.");
    }
}
