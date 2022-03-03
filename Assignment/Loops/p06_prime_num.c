/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, count = 0;

    printf("Enter N : ");
    scanf("%d", &num);

    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            count++;
            printf("%d ", i);
        }
    }

    if (count > 0)
    {
        printf("\nNot a prime num\n");
    }
    else
    {
        printf("\nA prime num\n");
    }

    return 0;
}
