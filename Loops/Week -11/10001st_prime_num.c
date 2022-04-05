/*  Qn :  The 1st prime number is 2.
          What is the 10001st prime number?
*/

/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

void main(int argc, char const *argv[])
{
    int i, j, flag, pc = 0;

    i = 2;
    while (pc != 10001)
    {
        flag = 0;
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag != 1)
        {
            pc++;
        }

        i++;
    }

    printf("10001st prime number is %d.\n", i - 1);
}
