/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, rem, sum;
    scanf("%d", &n);

    while (n != 0)
    {
        rem = n % 10;
        sum += rem;
        n /= 10;
    }

    printf("Sum is %d", sum);

    return 0;
}
