/*  Qn :
    Write a C program to calculate the coulmn-wise average of a 2D array.
             
                Sample Input    Sample Output
                40 41 42 43
                                42 43 44 45
                44 45 46 47
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

    /* Column Average */
    printf("Column average : \n");
    for (int j = 0; j < 4; j++)
    {
        sum = 0;
        for (int i = 0; i < 2; i++)
        {
            sum += A[i][j];
        }
        printf("%.2f\t", sum / 2);
    }

    return 0;
}

/*  2 x 4 matrix ->

    00 01 02 03
    10 11 12 13
*/