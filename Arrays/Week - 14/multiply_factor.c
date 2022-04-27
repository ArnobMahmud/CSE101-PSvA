/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int A[10][10], m, n, sum = 0;
    float Ac[10][10], fctr;

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

    printf("Enter a factor : ");
    scanf("%f", &fctr);

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            Ac[i][j] = A[i][j] * fctr;
            printf("%.2f\t", Ac[i][j]);
        }
        printf("\n");
    }

    return 0;
}
