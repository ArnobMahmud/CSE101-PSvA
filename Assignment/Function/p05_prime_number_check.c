/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int primeCheck(int num)
{
    int flag = 0;
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag != 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main(int argc, char const *argv[])
{
    int num;

    printf("Enter a number : ");
    scanf("%d", &num);

    printf("%d", primeCheck(num));
    
    return 0;
}
