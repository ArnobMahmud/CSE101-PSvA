/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int ll, ul, fctr;

    scanf("%d %d", &ll, &ul);

    for (int i = ll; i <= ul; i++)
    {
        fctr = 0;
        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                fctr += j;
            }
        }

        if (fctr == i)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
