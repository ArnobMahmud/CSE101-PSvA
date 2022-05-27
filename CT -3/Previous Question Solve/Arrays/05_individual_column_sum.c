/*  Qn :
    Write a C program to find the sum of the individual columns of a 2D array.

              Sample Input        Sample Output
                  3 3
                3  4  6                 25
                7  9  11                29
                15 16 17                34
*/

/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int A[10][10], m, n, sum;

    scanf("%d %d", &m, &n);

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("A[%d][%d] : ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    for (int i = 0; i < m; i++)
    {
        sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += A[j][i];
        }
        printf("%d\n", sum);
    }

    return 0;
}
