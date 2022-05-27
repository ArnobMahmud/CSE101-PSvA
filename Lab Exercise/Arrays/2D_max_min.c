/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float A[10][10], m, n, max, min;

    printf("Enter row : ");
    scanf("%f", &m);

    printf("Enter column : ");
    scanf("%f", &n);

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("A[%d][%d] : ", i, j);
            scanf("%f", &A[i][j]);
        }
    }

    printf("Array : \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%.2f\t", A[i][j]);
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
            else if (min > A[i][j])
            {
                min = A[i][j];
            }
        }
    }

    printf("Max : %.2f\nMin : %.2f", max, min);

    return 0;
}