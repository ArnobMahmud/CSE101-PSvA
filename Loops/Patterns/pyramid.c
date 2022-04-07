/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;

    printf("How may rows do you want ? : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= (n - i); k++)
        {
            printf(" ");
        }

        for (int j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
