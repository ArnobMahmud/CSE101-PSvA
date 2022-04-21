/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{

    /* 2D Transpose : */

    int A[100][100], At[100][100], m, n;

    printf("Enter number of row : ");
    scanf("%d", &m);

    printf("Enter number of column : ");
    scanf("%d", &n);

    printf("Enter elements of 2D - array : \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("Matrix : \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%4d\t", A[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            At[j][i] = A[i][j];
        }
    }

    printf("Transpose of Matrix A : \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%4d\t", At[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/*
    Theory :
    Transpose of a matrix is to convert a given matrix's row to column position

    if, a(p * q) is a given matrix
    then, transpose of a(p * q) is aT(q * p)

        | 1   2   3 |       | 1   4   7 |
    A = | 4   5   6 |  At = | 2   5   8 |
        | 7   8   9 |       | 3   6   9 |
*/
