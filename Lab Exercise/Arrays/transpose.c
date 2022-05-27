/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float A[10][10], At[10][10], m, n;

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

    printf("Transpose of Matrix A : \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            At[i][j] = A[j][i];
            printf("%.2f\t", At[i][j]);
        }
        printf("\n");
    }

    return 0;
}