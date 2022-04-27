/*  Qn :
    Write a c program to take a number as input and print the frequencies of all existing digits.

                        Sample Input    Sample Output
                            2020          0=>2, 2=>2
                            45            4=>1, 5=>1
*/

/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int N, rem, count, temp;

    printf("Enter a number : ");
    scanf("%d", &N); // 2020

    for (int i = 0; i <= 9; i++)
    {
        count = 0;
        temp = N; // 2020
        while (temp != 0)
        {
            rem = temp % 10; // 0 -> 2 -> 0 -> 2
            if (rem == i)
            {
                count++; // 1 -> 0 -> 1 -> 0 => 2
            }
            temp /= 10; // 202 -> 20 -> 2 -> 0
        }
        if (count > 0)
        {
            printf("%d => %d\n", i, count); // 0 => 2
        }
    }

    return 0;
}
