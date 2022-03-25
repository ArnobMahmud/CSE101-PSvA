/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int m, x, bnm;

    printf(" mx ");
    for (int i = 0; i <= 10; i++)
    {
        printf(" %4d ", i);
    }
    printf("\n----------------------------------------------------------------------\n");

    for (int m = 0; m <= 10; m++)
    {
        printf("%4d", m);
        for (int x = 0; x <= m; x++)
        {
            if (x == 0)
            {
                bnm = 1;
            }
            else
            {
                bnm = bnm * (m - x + 1) / x;
            }
            printf(" %4d ", bnm);
        }
        printf("\n");
    }
    printf("----------------------------------------------------------------------\n");

    return 0;
}
