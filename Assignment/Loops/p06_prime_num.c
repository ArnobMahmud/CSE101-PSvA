/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, temp = 0;

    printf("Enter N : ");
    scanf("%d", &num);

    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            temp = 1;
            printf("%d ", i);
        }
    }

    if (temp == 1)
    {
        printf("\nNot a prime num\n");
    }
    else
    {
        printf("\nA prime num\n");
    }

    return 0;
}
