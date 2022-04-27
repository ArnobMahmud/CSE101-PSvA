/*  Qn :
    Write a C function that takes a 2D array. It will return numbers of prime
    number in that array.

             Sample Input       Sample Output
                1  8  7
                2 13  9              5
                5  4 11
*/

/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int primeNumSearch(int A[3][3])
{
    int flag, count = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            flag = 0;
            for (int k = 2; k <= A[i][j] / 2; k++)
            {
                if (A[i][j] % k == 0)
                {
                    flag = 1;
                }
            }
            if (flag == 0 && A[i][j] > 1)
            {
                //printf("%d ", A[i][j]);
                count++;
            }
        }
    }
    return count;
}

int main(int argc, char const *argv[])
{
    int A[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("A[%d][%d] : ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("%d", primeNumSearch(A));

    return 0;
}
