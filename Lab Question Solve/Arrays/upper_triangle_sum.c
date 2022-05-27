/*  Qn :
    Write a program to find the average of the upper triangle elements of a 2D
    matrix : 

          Sample Input      Sample Output
              3 3
             1 2 3
             4 5 6        sum= 11 avg= 1.22
             7 8 9
*/

/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int A[10][10], m, n;
    float avg, sum = 0, count = 0;

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
        for (int j = 0; j < n; j++)
        {
            if (i < j)
            {
                count++;
                sum += A[i][j];
                avg = sum / count;
            }
        }
    }

    printf("Sum : %.0f, Avg : %.2f", sum, avg);

    return 0;
}
