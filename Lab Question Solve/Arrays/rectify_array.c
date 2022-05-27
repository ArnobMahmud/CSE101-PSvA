/*  Qn :
    Write a C program to rectify a 2D array.

            Sample Input         Sample Output
            3  -2  5                 3 0 5
            -2  5 -9                 0 5 0
            3  -2  5                 3 0 5
*/

/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int A[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("A[%d]][%d] : ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (A[i][j] < 0)
            {
                A[i][j] = 0;
            }
            printf("%4d", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}
