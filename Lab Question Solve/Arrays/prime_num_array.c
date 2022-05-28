/*  Qn :
    Write a C program to print those numbers which are prime in a 2D array

            Sample Input         Sample Output
              11 12 13
              14 15 16           11 13 17 19
              17 18 19
*/

/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int A[3][3], flag;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("A[%d]][%d] : ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

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
                    break;
                }
            }

            if (flag == 0 && A[i][j] > 1)
            {
                printf("%d ", A[i][j]);
            }
        }
    }

    return 0;
}
