/*  Qn :
    Write a C program to find and replace numbers in a 2D array.

                Sample Input         Sample Output
                                          6 9
                1 2 4 6                 1 2 4 9
                6 2 3 6                 9 2 3 9
                3 6 3 1                 3 9 3 1
                6 2 6 1                 9 2 9 1
*/

/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{

    int A[4][4], tgn, rpn;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("A[%d]][%d] : ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    scanf("%d", &tgn);
    scanf("%d", &rpn);

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (A[i][j] == tgn)
            {
                A[i][j] = rpn;
            }
            printf("%4d", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}
