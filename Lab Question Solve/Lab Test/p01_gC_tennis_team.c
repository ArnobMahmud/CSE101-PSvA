/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

void main(int argc, char const *argv[])
{
    float A[5];
    int count = 0, termFrnd = 1, minFrnd = 1, difFrnd = 1, way;

    for (int i = 0; i < 5; i++)
    {
        printf("A[%d] : ", i);
        scanf("%f", &A[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        if (A[i] < 6.0)
        {
            count++;
        }
    }

    for (int j = 1; j <= count; j++)
    {
        termFrnd *= j;
    }

    for (int j = 1; j <= 2; j++)
    {
        minFrnd *= j;
    }

    for (int j = 1; j <= (count - 2); j++)
    {
        difFrnd *= j;
    }

    way = termFrnd / (minFrnd * difFrnd);

    printf("%d", way);
}
