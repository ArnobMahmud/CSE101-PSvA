/*  Qn :
    Write a C function that takes a 2D array and returns the numbers of palindrome
    number of that array in the main function.


                Sample Input         Sample Output
                 3   121    21
                27    43   636              4
                15    16     4
*/

/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int palindromeQuery(int A[3][3])
{
    int rev, rem, temp, count = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            temp = A[i][j];
            rev = 0;
            while (A[i][j] != 0)
            {
                rem = A[i][j] % 10;
                rev = rev * 10 + rem;
                A[i][j] /= 10;
            }
            if (rev == temp)
            {
                //printf("%d ", temp);
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

    printf("%d", palindromeQuery(A));

    return 0;
}
