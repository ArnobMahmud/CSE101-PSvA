/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int sum, count = 0, num = 0;

FindOut:
    if ((num % 6 == 0) && (num % 4 != 0))
    {
        sum += num;
        count++;
        printf("(%d) Found : %d.\n", count, num);
    }
    num++;

    if (num >= 0 && num <= 100)
    {
        goto FindOut;
    }
    else
    {
        goto Exit;
    }

Exit:
    printf("Sum is %d.\n", sum);
    printf("Total count is %d.\n", count);

    return 0;
}
