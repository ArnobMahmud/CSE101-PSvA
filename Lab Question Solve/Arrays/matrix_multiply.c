/*  Qn :
    Write a c program to take two 2D arrays as input and print the sum of
    multiplied(element - wise) 2D array as output.

                  Sample Input         Sample Output
                 10   20   10
                 20   100  20
                 25   20   15
                                            5
                -1   -1   0
                -1    0   1
                 0    1   1
*/

/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int A[3][3], B[3][3], C = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            /* printf("A[%d][%d] : ", i, j);*/
            scanf("%d", &A[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            /* printf("B[%d][%d] : ", i, j);*/
            scanf("%d", &B[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            C += A[i][j] * B[i][j];
        }
    }

    printf("%d", C);

    return 0;
}
