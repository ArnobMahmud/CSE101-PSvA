/*  Qn:
     Write a c function to take two 2D arrays as parameters and transform a 2D array
    (input) into another 2D array (output) according to the following function:

                            0 for xi,j < 0
            yi,j = {
                            xi,j otherwise

            Sample Input        Sample Output
             1 -1 2 3               1 0 2 3
             2 0 -3 4               2 0 0 4
*/

/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>

void transformArray(int A[2][4])
{
    int At[2][4];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            At[i][j] = A[i][j];
            if (At[i][j] < 0)
            {
                At[i][j] = 0;
            }
            printf("%4d", At[i][j]);
        }
        printf("\n");
    }
}

int main(int argc, char const *argv[])
{
    int A[2][4];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    transformArray(A);
    return 0;
}
