/*
    Qn :            1 2 3 4 5 6 7 8 9 153 ........... Nth
*/

/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int i, N, count, rem, temp, res, arc = 0;

    printf("Enter Nth number : ");
    scanf("%d", &N);

    for (i = 1; arc != N; i++)
    {
        temp = i;
        count = 0;
        while (temp != 0)
        {
            count++;
            temp /= 10;
        }

        temp = i;
        res = 0;
        while (temp != 0)
        {
            rem = temp % 10;
            res += pow(rem, count);
            temp /= 10;
        }

        if (res == i)
        {
            printf("%d ", i);
            arc++;
        }
    }
    printf("\n%dth armstrong number is : %d", N, i - 1);

    return 0;
}
