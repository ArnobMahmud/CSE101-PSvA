/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int ll, ul, rem, temp, rev;

    printf("Enter lower limit : ");
    scanf("%d", &ll);

    printf("Enter lower limit : ");
    scanf("%d", &ul);

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
        }
    }

    return 0;
}
