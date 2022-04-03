/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, sum = 0, rem;

    scanf("%d", &num);

    while (num != 0)
    {
        rem = num % 10;
        sum += rem;
        num /= 10;
    }

    printf("Sum is %d", sum);

    return 0;
}
