/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, sum = 0;

    printf("Enter 10 two digits number : ");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &num);
        if (num > 0)
        {
            sum += num;
        }
        if (sum > 999)
        {
            break;
        }
    }

    printf("Sum is %d", sum);

    return 0;
}