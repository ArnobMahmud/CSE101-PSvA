/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int A[100][100], m, n, sum = 0;

    printf("Enter number of row : ");
    scanf("%d", &m);

    printf("Enter number of column : ");
    scanf("%d", &n);

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("A[%d][%d] : ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("Matrix A : \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%4d\t", A[i][j]);
        }
        printf("\n");
    }

    printf("Elements in diagonal : ");
    for (int i = 0; i < m; i++)
    {
        printf("%4d", A[i][m - 1 - i]);
        sum += A[i][m - 1 - i];
    }

    printf("\nSum of the elements is %d.\n", sum);

    return 0;
}