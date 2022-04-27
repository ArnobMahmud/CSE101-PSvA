/*  Qn :
    Write a C function that takes a 2D array. It will return 1 if there finds a perfect
    number otherwise it will return 0.

                Sample Input         Sample Output
                    1 3 7
                    2 6 9               perfect
                    5 4 8
*/

/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int perfectQuery(int A[3][3])
{
    int fctr;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            fctr = 0;
            for (int k = 1; k < A[i][j]; k++)
            {
                if (A[i][j] % k == 0)
                {
                    fctr += k;
                }
            }

            if (fctr == A[i][j])
            {
                return 1;
            }
        }
    }
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

    if (perfectQuery(A) == 1)
    {
        printf("Perfect");
    }

    return 0;
}
