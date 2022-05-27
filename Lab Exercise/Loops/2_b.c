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

    for (int i = 1; i <= n; i += 2)
    {
        sum += i * i;
    }

    printf("Sum is %d", sum);

    return 0;
}
