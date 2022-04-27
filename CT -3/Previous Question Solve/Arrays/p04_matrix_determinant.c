/*  Qn :
    Write a C program to input a 3 × 3 matrix and print the determinant of it.

           Sample Input      Sample Output
             6   1  1
             4  -2  5           -306
             2   8  7
*/

/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int A[3][3], detA, a, b, c;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("A[%d][%d] : ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            a = A[1][1] * A[2][2] - A[2][1] * A[1][2];
            b = A[1][0] * A[2][2] - A[2][0] * A[1][2];
            c = A[1][0] * A[2][1] - A[2][0] * A[1][1];

            detA = A[0][0] * a - A[0][1] * b + A[0][2] * c;
        }
    }

    printf("%d", detA);

    return 0;
}
