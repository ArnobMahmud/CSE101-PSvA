/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int A[100][100], B[100][100], C[100][100], m, n, sum = 0;

    printf("Enter number of row : ");
    scanf("%d", &m);

    printf("Enter number of column : ");
    scanf("%d", &n);

    printf("Enter elements of A matrix : \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("A[%d][%d] : ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of B matrix : \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("B[%d][%d] : ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    printf("A matrix : \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%4d\t", A[i][j]);
        }
        printf("\n");
    }

    printf("B matrix : \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%4d\t", B[i][j]);
        }
        printf("\n");
    }

    printf("[C] =  [A] + [B] : \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
            printf("%4d\t", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}