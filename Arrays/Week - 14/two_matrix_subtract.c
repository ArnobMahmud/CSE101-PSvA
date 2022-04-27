/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int A[10][10], B[10][10], C[10][10], m, n;

    printf("Enter number of row : ");
    scanf("%d", &m);

    printf("Enter number of column : ");
    scanf("%d", &n);

    printf("\nEnter elements of matrix A : \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nEnter elements of matrix B : \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    printf("\nC = A - B : \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            C[i][j] = A[i][j] - B[i][j];
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}