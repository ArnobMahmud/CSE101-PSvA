/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, num, rem, rev, temp, pdc = 0;
    scanf("%d", &num);

    i = 1;
    while (pdc != num)
    {
        rev = 0;
        temp = i;
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
        i++;
    }

    printf("\n%dth palindrome number is %d", num, i - 1);

    return 0;
}
