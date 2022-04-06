/*  Qn :
    A triangular number or triangle number counts objects
    arranged in an equilateral triangle, as in the diagram on the right.
    The n-th triangular number is the number of dots composing 
    a triangle with n dots on a side, and is equal to the sum of the 
    n natural numbers from 1 to n.

    *    *       *           *              *                *
        * *     * *         * *            * *              * *
               * * *       * * *          * * *            * * * 
                          * * * *        * * * *          * * * *
                                        * * * * *        * * * * *
                                                        * * * * * *               
            Sample input       Sample output
                10         1 3 6 10 15 21 28 36 45 55
*/

/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, Tn;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        Tn = (i * (i + 1) / 2);
        printf("%d ", Tn);
    }

    return 0;
}
