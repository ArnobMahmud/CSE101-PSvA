/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int primeCheck(int num)
{
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

int main(int argc, char const *argv[])
{
    int num, bin;

    printf("Enter a number : ");
    scanf("%d", &num);

    bin = primeCheck(num);

    if (bin == 1)
    {
        printf("%d is a prime number", num);
    }
    else
    {
        printf("%d is not a prime number", num);
    }

    return 0;
}
