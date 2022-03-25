/*  Qn :
    Write a C program to check whether a number is perfect or not

                Sample Input           Sample Output
                    6              6 is perfect number
                   10             10 is not perfect number
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

    if (num == fctr)
    {
        printf("%d is perfect number.\n", num);
    }
    else
    {
        printf("%d is not a perfect number.\n", num);
    }

    return 0;
}
