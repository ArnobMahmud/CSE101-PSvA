/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float i, j;

    printf("Number\t");
    for (i = 0.0; i <= 0.9; i += 0.1)
    {
        printf("%.1f\t", i);
    }
    printf("\n");

    for (i = 0.0; i <= 9.0; i++)
    {
        printf("%.1f\t", i);
        for (j = 0.0; j <= 0.9; j += 0.1)
        {
            printf("%.2f\t", sqrt(i + j));
        }

        printf("\n");
    }

    return 0;
}
