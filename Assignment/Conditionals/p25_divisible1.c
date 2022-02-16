/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int sum, count = 0, num = 100;

FindOut:
    if (num % 7 == 0)
    {
        sum += num;
        count++;
    }
    num++;

    if (num >= 100 && num <= 200)
    {
        goto FindOut;
    }
    else
    {
        goto Exit;
    }

Exit:
    printf("Numbers are divisible by 7 is %d.\n", count);
    printf("Sum is : %d.\n", sum);

    return 0;
}
