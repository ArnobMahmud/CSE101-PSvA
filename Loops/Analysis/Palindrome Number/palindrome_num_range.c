/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int ll, ul, rem, rev, temp, pdc = 0;

    scanf("%d %d", &ll, &ul);

    for (int i = ll; i <= ul; i++)
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
