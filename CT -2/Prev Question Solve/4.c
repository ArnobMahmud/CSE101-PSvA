/*  Qn :
    Write a c program to calculate the combination of n things taken k at a time without
    repetition. Here, you have to take n and k as inputs and give output according to the
    following formula:

                                     (nCk) = n!/r!(n-k)!

                                    Sample Input      Sample Output
                                      10 6               210
                                       6 2                15
*/

/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int n, k, fact_n = 1, fact_k = 1, fact_n_k = 1, nCk;

    printf("Enter n : ");
    scanf("%d", &n);

    printf("Enter k : ");
    scanf("%d", &k);

    if (k <= n)
    {
        for (int i = 1; i <= n; i++)
        {
            fact_n *= i;
        }

        for (int j = 1; j <= k; j++)
        {
            fact_k *= j;
        }

        for (int m = 1; m <= (n - k); m++)
        {
            fact_n_k *= m;
        }

        nCk = fact_n / (fact_k * fact_n_k);
        printf("Combination of %dC%d is : %d", n, k, nCk);
    }
    else
    {
        printf("k have to be smaller than n.\n");
    }

    return 0;
}
