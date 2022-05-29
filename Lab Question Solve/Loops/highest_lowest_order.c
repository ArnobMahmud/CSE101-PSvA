/*  Qn :
    Take 3 inputs of integers and print them from highest to lowest order.

            Sample input     Sample Output
              23 10 14          10 14 23
*/

/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int A[3], temp;

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (A[j] < A[i])
            {
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%d ", A[i]);
    }
    

    return 0;
}
