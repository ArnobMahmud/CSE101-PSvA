/*  Qn :
    Write a C program to calculate the row-wise average of a 2D array.
              
               Sample Input      Sample Output
                40 41 42 43          41.5
                44 45 46 47          45.5
*/

/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float A[2][4], sum;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("A[%d][%d] : ", i, j);
            scanf("%f", &A[i][j]);
        }
    }

    /* Row Average */
    printf("Row average : \n");
    for (int i = 0; i < 2; i++)
    {
        sum = 0;
        for (int j = 0; j < 4; j++)
        {
            sum += A[i][j];
        }
        printf("%.2f\n", sum / 4);
    }

    return 0;
}

/*  2 x 4 matrix ->

    00 01 02 03
    10 11 12 13
*/