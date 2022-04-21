/*  Qn :
    Write a c program to take two arrays as input and print the combined array as output.

                Sample Input           Sample Output
                1 - 2  10
                                    1  -2  10  -4  -10
                   -4 -10
*/

/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int A[3], B[2], C[5];

    for (int i = 0; i < 3; i++)
    {
        printf("A[%d] : ", i);
        scanf("%d", &A[i]);
        C[i] = A[i];
    }

    for (int i = 0; i < 2; i++)
    {
        printf("B[%d] : ", i);
        scanf("%d", &B[i]);
        C[i + 3] = B[i];
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", C[i]);
    }

    return 0;
}
