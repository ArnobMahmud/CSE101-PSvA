/*  Qn :
    Write a c program using functions to input a matrix and
    print its normalized form. Here, a matrix can be
    normalized through dividing each value by the maximum
    value of the matrix.

                Sample Input        Sample Output
                    1   2           0.50     1.00
                   -1   0           -0.50    0.00
*/

/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

void normalizeMatrix(int A[2][2])
{
    float detA, normA[2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            detA = ((A[0][0] * A[1][1]) - (A[1][0] * A[0][1]));
            normA[i][j] = A[i][j] / detA;
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%.2f\t", normA[i][j]);
        }
        printf("\n");
    }
}

int main(int argc, char const *argv[])
{
    int A[2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    normalizeMatrix(A);

    return 0;
}
