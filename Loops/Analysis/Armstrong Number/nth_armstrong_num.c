/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int i, n, count, rem, temp, sum, arc = 0;

    scanf("%d", &n);

    i = 1;
    while (arc != n) // for manually(without user input) change the value of n to get exact armstrong number.
    {
        temp = i;
        count = 0;
        while (temp != 0)
        {
            temp /= 10;
            count++;
        }

        temp = i;
        sum = 0;
        while (temp != 0)
        {
            rem = temp % 10;
            sum += pow(rem, count);
            temp /= 10;
        }

        if (sum == i)
        {
            printf("%d ", i);
            arc++;
        }

        i++;
    }

    printf("\n%dth armstrong number : %d", n, i - 1);

    return 0;
}
