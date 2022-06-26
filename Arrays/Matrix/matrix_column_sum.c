/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int A[3][3], sum;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("A[%d][%d] : ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    for (int j = 0; j < 3; j++)
    {
        sum = 0;
        for (int i = 0; i < 3; i++)
        {
            sum += A[i][j];
        }
        printf("%d\t", sum);
    }

    return 0;
}

/*
    1 2 3
    4 5 6
    7 8 9

   Output ->  12 15 18

    00 01 02
    10 11 12
    20 21 22

*/