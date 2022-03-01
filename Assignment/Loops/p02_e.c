/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int num, sum;
    // int even_sum = 0, odd_sum = 0;

    printf("Enter end num : \n");
    scanf("%d", &num);

    for (int i = 0; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            sum -= i;
        }
        else
        {
            sum += i;
        }
    }

    /* for (int i = 0; i <= num; i += 2)
    {
        even_sum += i;
    }

    for (int j = 1; j <= num; j += 2)
    {
        odd_sum += j;
    }

    sum = odd_sum - even_sum; */

    printf("Sum is : %d.", sum);

    return 0;
}
