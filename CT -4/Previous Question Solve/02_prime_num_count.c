/*  Qn :
    Write a c program using function to count the prime numbers in a 1D array. First,
    develop a function to check whether a number is prime (1) or not (0). Then, use that
    function to count the prime numbers (output) in a 1D array (input).

                    Sample Input     Sample Output
                    10 -10 3 4 6           1
                    2 1 0 5 -2             2
*/

/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int isPrime(int n)
{
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i != 0 && n > 1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}

int main(int argc, char const *argv[])
{
    int A[5], count = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("A[%d] : ", i);
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        if (isPrime(A[i]) == 1)
        {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}
