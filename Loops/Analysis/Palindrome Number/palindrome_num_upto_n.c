/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, temp, rev, rem, pdc = 0;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        temp = i;
        rev = 0;
        while (temp != 0)
        {
            rem = temp % 10;
            rev = rev * 10 + rem;
            temp /= 10;
        }

        if (rev == i)
        {
            printf("%d ", i);
            pdc++;
        }
    }
    printf("\nTotal palindrome number : %d ", pdc);

    return 0;
}
