/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

void main(int argc, char const *argv[])
{
    int n, a = 1, b = 3, c = 4, sum = 0;

    printf("Enter n : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum += (a * b * c);
        a++;
        b += 2;
        c += 2;
    }
    
    printf("Sum is %d", sum);
}
