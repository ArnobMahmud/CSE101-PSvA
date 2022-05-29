/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

void main(int argc, char const *argv[])
{
    int num, flag = 0;

    printf("Enter a number : ");
    scanf("%d", &num);

    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag != 1)
    {
        printf("%d is a prime number", num);
    }
    else
    {
        printf("%d is not a prime number", num);
    }
}
