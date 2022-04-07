/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, rem, temp, base, bin;

    printf("Enter n : ");
    scanf("%d", &n);

    printf("dec \t bin\n");
    for (int i = 1; i <= n; i++)
    {
        temp = i;
        base = 1;
        bin = 0;
        while (temp != 0)
        {
            rem = temp % 2;
            bin += rem * base;
            base *= 10;
            temp /= 2;
        }

        printf("%d \t %d\n", i, bin);
    }

    return 0;
}
