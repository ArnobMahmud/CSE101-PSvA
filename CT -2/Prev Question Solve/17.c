/*  Qn :  Write a c program that takes your valid mobile number as
          input and finds the sum of even digits and odd digits separately.

            Sample input: 01517902913
            Sample output: Sum of even digits = 2
                           Sum of odd digits = 36
*/

/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, rem, count = 0, temp, even_sum = 0, odd_sum = 0;

    scanf("%d", &num);

    temp = num;
    while (temp != 0)
    {
        temp /= 10;
        count++;
    }

    if (count == 10)
    {
        while (num != 0)
        {
            rem = num % 10;
            if (rem % 2 == 0)
            {
                even_sum += rem;
            }
            else
            {
                odd_sum += rem;
            }
            num /= 10;
        }

        printf("Sum of odd digits = %d\n", odd_sum);
        printf("Sum of even digits = %d", even_sum);
    }
    else
    {
        printf("Invalid mobile number.");
    }

    return 0;
}
