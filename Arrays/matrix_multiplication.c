/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

/*
    Theory :

    Multiplication of 2 matrix only possible -
    if & only if -

    Column of 1st matrix == Row of 2nd matrix

    => a(p * q) x b(q * r) = c (p * r)
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int A[100][100], B[100][100], C[100][100], r1, r2, c1, c2, sum = 0;

    /* Input row & column */
    printf("Enter number of row for Matrix A : ");
    scanf("%d", &r1);

    printf("Enter number of column for Matrix A : ");
    scanf("%d", &c1);

    printf("Enter number of row for Matrix B : ");
    scanf("%d", &r2);

    printf("Enter number of column for Matrix B : ");
    scanf("%d", &c2);

    /* condition checking */
    while (c1 != r2)
    {
        printf("Column of A matrix is not equal to Row of B matrix.\n");

        printf("Enter number of row for Matrix A : ");
        scanf("%d", &r1);

        printf("Enter number of column for Matrix A : ");
        scanf("%d", &c1);

        printf("Enter number of row for Matrix B : ");
        scanf("%d", &r2);

        printf("Enter number of column for Matrix B : ");
        scanf("%d", &c2);
    }

    /* Input element */
    printf("Enter elements of A matrix : \n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("A[%d][%d] : ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of B matrix : \n");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("B[%d][%d] : ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    /* Printing matrix */
    printf("A matrix : \n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("%4d\t", A[i][j]);
        }
        printf("\n");
    }

    printf("B matrix : \n");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%4d\t", B[i][j]);
        }
        printf("\n");
    }

    /* Multiply */
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            for (int k = 0; k < c1; k++)
            {
                sum += A[i][k] * B[k][j]; // C[0][0] = A[0][0] * B[0][0] + A[0][1] * B[1][0]
            }
            C[i][j] = sum;
            sum = 0;
        }
    }

    /* Printing result */
    printf("[C] = [A] * [B] : \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%4d\t", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
