/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, sum = 0;

    printf("Enter n : ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }

    printf("Sum is %d", sum);

    return 0;
}
