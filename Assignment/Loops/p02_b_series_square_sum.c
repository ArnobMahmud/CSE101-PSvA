/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int n, sum;

    printf("Enter max value of series :\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i += 2)
    {
        sum += pow(i, 2);
    }

    printf("Sum is %d.", sum);

    return 0;
}
