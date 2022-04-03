/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, fctr = 0;

    scanf("%d", &num);

    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            fctr += i;
        }
    }

    if (fctr == num)
    {
        printf("%d is a perfect number", num);
    }
    else
    {
        printf("%d is a not perfect number", num);
    }

    return 0;
}
