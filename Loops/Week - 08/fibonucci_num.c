/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, a = 0, b = 1, c, sum = 0;

    printf("Enter N : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        c = a + b;

        printf("%d ", a);
        sum += a;

        a = b;
        b = c;
    }

    printf("\n%dth num is %d.", n, a - 1);
    printf("\nSum is %d.", sum);

    return 0;
}
