/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int A[10][10], m, n, sum = 0;

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

    printf("\nArray : \n");
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
            sum += A[i][j];
        }
    }

    printf("\nSum is : %d", sum);

    return 0;
}
