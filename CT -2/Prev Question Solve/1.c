/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int N, num;
    float sum = 0.0;

    printf("Enter N : ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        num = pow(10, i) - i;
        sum += (1.0 / num);
    }

    printf("Sum is %f", sum);

    return 0;
}

