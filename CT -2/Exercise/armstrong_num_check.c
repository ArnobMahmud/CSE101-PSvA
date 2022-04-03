/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int num, temp, count, rem, sum;

    scanf("%d", &num);

    temp = num;
    count = 0;
    while (temp != 0)
    {
        temp /= 10;
        count++;
    }

    temp = num;
    sum = 0;
    while (temp != 0)
    {
        rem = temp % 10;
        sum += pow(rem, count);
        temp /= 10;
    }

    if (sum == num)
    {
        printf("%d is an armstrong number.", num);
    }
    else
    {
        printf("%d is not an armstrong number.", num);
    }

    return 0;
}
