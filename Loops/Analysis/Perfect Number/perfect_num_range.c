/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int ll, ul, fctr;

    printf("Enter lower limit : ");
    scanf("%d", &ll);

    printf("Enter upper limit : ");
    scanf("%d", &ul);

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
            printf("%d\t", i);
        }
    }

    return 0;
}
