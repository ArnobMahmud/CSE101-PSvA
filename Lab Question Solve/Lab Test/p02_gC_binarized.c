/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>

void binarized(int A[2][4])
{
    int bin[2][4];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            bin[i][j] = round(1 / (1 + exp(-10 * A[i][j])));
            printf("%4d", bin[i][j]);
        }
        printf("\n");
    }
}

int main(int argc, char const *argv[])
{
    int A[2][4];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("A[%d][%d] : ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    binarized(A);

    return 0;
}
