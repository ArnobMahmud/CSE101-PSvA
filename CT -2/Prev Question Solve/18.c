/*  Qn :  The 1st prime number is 2.
          What is the 10001st prime number?
*/

/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, n, flag, pc = 0;
    scanf("%d", &n);

    i = 2;
    while (i > 0)
    {
        flag = 0;
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            pc++;
        }

        if (pc == n)
        {
            printf("%d ", i);
            break;
        }
        i++;
    }

    return 0;
}
