/*  Qn :
   Write a c program to take a 2D array as input and print the binarized form as output
    according to the following logistic function,

                     1
          y  = ---------------
                 1 + e^(-10x)

            Sample Input           Sample Output
             10 -10 3 4              1 0 1 1
             -2 -1 0 5               0 0 1 1
*/

/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int A[2][4], bin[2][4];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            bin[i][j] = round(1 / (1 + exp(-10 * A[i][j])));
            printf("%d\t", bin[i][j]);
        }
        printf("\n");
    }

    return 0;
}
