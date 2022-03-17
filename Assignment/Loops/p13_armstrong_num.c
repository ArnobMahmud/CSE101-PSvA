/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int num, temp, rem, res, count;

    printf("Enter a number : ");
    scanf("%d", &num);

    count = 0;
    temp = num;
    while (temp != 0)
    {
        temp /= 10;
        count++;
    }

    temp = num;
    res = 0;
    while (temp != 0)
    {
        rem = temp % 10;
        res += pow(rem, count);
        temp /= 10;
    }

    if (res != num)
    {
        printf("Not Armstrong.\n");
    }
    else
    {
        printf("Armstrong.\n");
    }

    return 0;
}