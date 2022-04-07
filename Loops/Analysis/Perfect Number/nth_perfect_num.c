/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, n, fctr, pfc = 0;
    scanf("%d", &n);

    i = 1;
    while (n != pfc)
    {
        fctr = 0;
        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                fctr += j;
            }
        }

        if (i == fctr)
        {
            pfc++;
        }
        i++;
    }

    printf("%dth perfect number is %d", n, i - 1);

    return 0;
}
