/*  Qn :
    Write a C program to show the common factors of two given numbers and also
    show the summation of that common factors.

             Sample Input        Sample Output
                9 45                1 3 9
                                   Sum= 13
                                   
                21 63              1 3 7 21
                                   Sum= 32
*/

/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{

    int n1, n2, sum = 0;

    scanf("%d %d", &n1, &n2);

    for (int i = 1; i <= n1; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            printf("%d ", i);
            sum += i;
        }
    }

    printf("\nSum = %d", sum);

    return 0;
}