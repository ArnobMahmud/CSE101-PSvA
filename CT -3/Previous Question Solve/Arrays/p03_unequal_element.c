/*  Qn :
    Write a c program to take two arrays as input and print the index of first unequal
    element. If the arrays are equal, print “N/A”.


                  Sample Input         Sample Output
                 1 -2 10 -4 -10
                                             3
                 1 -2 10 4 -10
*/

/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int A[5], B[5], idx = -1;

    for (int i = 0; i < 5; i++)
    {
        printf("A[%d] : ", i);
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("B[%d] : ", i);
        scanf("%d", &B[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        if (A[i] != B[i])
        {
            idx = i;
            break;
        }
    }

    if (idx != -1)
    {
        printf("%d", idx);
    }
    else
    {
        printf("N/A");
    }

    return 0;
}
