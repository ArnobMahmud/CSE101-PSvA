/*  Qn :
    Write a C program to find the average of the diagonal elements of two matrix
    (take primary diagonal elements of 1st matrix and secondary diagonal elements
    of 2nd matrix).

                 Sample Input       Sample Output
                    3 3
                    4 4
                   1 2 3
                   4 5 6
                   7 8 9
                                       8.14
                 3  4  5  6
                 7  8  9 10
                11 12 13 14
                15 16 17 18
*/

/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int A[10][10], B[10][10], m, n, p, q;
    float avg = 0, sum = 0, count = 0;

    scanf("%d %d", &m, &n);
    scanf("%d %d", &p, &q);

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("A[%d][%d] : ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("B[%d][%d] : ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                sum += A[i][j];
                count++;
            }
        }
    }

    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            if ((i + j) == (p - 1))
            {
                sum += B[i][j];
                count++;
            }
        }
    }

    printf("%.2f", sum / count);

    return 0;
}