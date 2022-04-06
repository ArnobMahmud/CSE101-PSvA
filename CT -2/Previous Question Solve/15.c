/*  Qn :
    Write a program to find the perfect number between a range.

            Sample Input         Sample Output
              1 1000                6 28 496
*/

/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>

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
