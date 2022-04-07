/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, rem, temp, base, oct;

    printf("Enter n : ");
    scanf("%d", &n);

    printf("dec\toct\n");
    for (int i = 1; i <= n; i++)
    {
        temp = i;
        base = 1;
        oct = 0;
        while (temp != 0)
        {
            rem = temp % 8;
            oct += rem * base;
            base *= 10;
            temp /= 8;
        }

        printf("%d\t%d\n", i, oct);
    }

    return 0;
}
