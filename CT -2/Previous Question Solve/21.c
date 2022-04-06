/*  Qn:
    Write a c program to check whether a number is a perfect number or not.
    Note that a perfect number is equal to the sum of its factors excluding itself.
    For example, 28 is perfect number, since 1 + 2 + 4 + 7 + 14 = 28

            Sample input        Sample output
                28                   Yes
                46                    No

*/

/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, fctr = 0;

    scanf("%d", &num);

    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            fctr += i;
        }
    }

    if (fctr == num)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}
