/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int N, flag = 0;

    printf("Enter a number : ");
    scanf("%d", &N);

    for (int i = 2; i <= N / 2; i++)
    {
        if (N % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag != 1)
    {
        printf("%d is a prime number.", N);
    }
    else
    {
        printf("%d isn't a prime number.", N);
    }

    return 0;
}
