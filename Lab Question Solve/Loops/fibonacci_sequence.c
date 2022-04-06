/*  Qn :
    Write a c program using function to print the
    N-th number of the following series:

        1, 2, 3, 5, 8, 13, 21, . . . . . , 𝑁

            Sample Input        Sample Output
                5                     8
                10                   89
*/

/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int nthFibonacci(int x)
{
    int a = 1, b = 2, c = 0, temp;

    for (int i = 1; i <= x; i++)
    {
        // printf("%d ", a);
        c = a + b;
        temp = a;
        a = b;
        b = c;
    }
    return temp;
}

void main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);

    printf("\n%d ", nthFibonacci(n));
}
