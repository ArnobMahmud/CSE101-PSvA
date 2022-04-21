/*  Qn :
    Write a program to find the maximum and minimum value of a 2D array using
    function. The program of printing output have to be shown in the main function.

                Sample Input         Sample Output
                1  -2  3
                4   0  4            max: 20 min: -2
                3  20  7
*/

/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{

    int A[3][3], max, min;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    max = min = A[0][0];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (A[i][j] > max)
            {
                max = A[i][j];
            }
            else if (A[i][j] < min)
            {
                min = A[i][j];
            }
        }
    }

    printf("Max : %d, Min : %d", max, min);

    return 0;
}
