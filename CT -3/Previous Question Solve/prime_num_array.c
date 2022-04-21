/*  Qn :
    Write a c program using function to count the prime numbers in a 1D array. First,
    develop a function to check whether a number is prime (1) or not (0). Then, use that
    function to count the prime numbers (output) in a 1D array (input).

                Sample Input        Sample Output
              10  -10  3  4  6            1
              2    1   0  5 -2            2
*/

/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int isPrime(int num)
{
    if (num < 2)
    {
        return 0;
    }

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main(int argc, char const *argv[])
{
    int A[5], pc = 0;

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        if (isPrime(A[i]) == 1)
        {
            pc++;
        }
    }

    printf("%d", pc);

    return 0;
}
