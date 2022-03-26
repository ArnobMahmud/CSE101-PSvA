/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int A[100][100], m, n, max, min;

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

    printf("\nMatrix A : \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%4d\t", A[i][j]);
        }
        printf("\n");
    }

    max = min = A[0][0];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (max < A[i][j])
            {
                max = A[i][j];
            }
            if (min > A[i][j])
            {
                min = A[i][j];
            }
        }
    }

    printf("\nMax is : %d\n", max);
    printf("Min is : %d", min);

    return 0;
}
