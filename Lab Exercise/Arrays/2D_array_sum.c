/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int A[10][10], m, n;
    float sum = 0, avg;

    printf("Enter row : ");
    scanf("%d", &m);

    printf("Enter column : ");
    scanf("%d", &n);

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
        for (int j = 0; j < n; j++)
        {
            sum += A[i][j];
        }
    }

    avg = sum / (float)(m * n);
    printf("Sum :  %.2f, Average : %.2f", sum, avg);
    
    return 0;
}