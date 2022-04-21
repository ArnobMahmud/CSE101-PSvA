/*  Qn :
    Write a c program using functions to input two 1D arrays
    and print the location of the first unequal element. Here,
    you need to input the size of any arrays.

                Sample Input     Sample Output
                      3
                    1 2 1
                                       1
                    1 1 2
*/

/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

void unequalElement(int n, int A[], int B[])
{
    int idx = -1;

    for (int i = 0; i < n; i++)
    {
        if (A[i] != B[i])
        {
            idx = i;
            break;
        }
    }

    printf("%d", idx);
}

int main(int argc, char const *argv[])
{
    int n, A[10], B[10];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &B[i]);
    }

    unequalElement(n, A, B);

    return 0;
}
