/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, temp, rem, rev, sum, plc = 0;

    printf("Enter n : ");
    scanf("%d", &n);

    int i = 1;
    while (plc != n)
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
            plc++;
        }
        i++;
    }

    printf("%dth palindrome no : %d", n, i - 1);

    return 0;
}
