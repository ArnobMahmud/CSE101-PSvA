/*  Qn :
    Write a c program to take a number as input and print the sum of first digit and last
    of a number.
                            Input             Output
                            123                 4
                            2020                2
*/

/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int N, temp, rem, sum = 0;

    printf("Enter N :");
    scanf("%d", &N);

    temp = N; //=> 2020

    sum = N % 10; //=> 2020 % 10 => 0
    while (temp != 0)
    {
        rem = temp % 10; //=> 0 -> 2 -> 0 -> 2
        temp /= 10;      //=> 202 -> 20 -> 2 -> 0
    }

    sum += rem;                 //=> 0 + 2
    printf("Sum is : %d", sum); //=> 2

    return 0;
}
