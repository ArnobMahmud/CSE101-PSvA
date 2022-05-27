/*  Qn :
    Write a C function that takes two 1D array and concatenate this two array into
    another array.

           Sample Input      Sample Output
            3 6 4
                              3 6 4 2 7 8
            2 7 8
*/

/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int A[3], B[3], C[6];

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &A[i]);
        C[i] = A[i];
    }

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &B[i]);
        C[i + 3] = B[i];
    }

    for (int i = 0; i < 6; i++)
    {
        printf("%4d", C[i]);
    }

    return 0;
}
