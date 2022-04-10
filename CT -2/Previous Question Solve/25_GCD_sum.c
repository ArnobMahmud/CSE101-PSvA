/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

void main(int argc, char const *argv[])
{
    int n1, n2, n3, sum = 0;
    scanf("%d %d %d", &n1, &n2, &n3);

    for (int i = 1; i <= n1; i++)
    {
        if (n1 % i == 0 && n2 % i == 0 && n3 % i == 0)
        {
            printf("%d ", i);
            sum += i;
        }
    }

    printf("\n%d", sum);
}
