/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, temp, rem, sum = 0;

    printf("Enter a number : ");
    scanf("%d", &n);

    temp = n;

    while (temp != 0)
    {
        rem = temp % 10;
        sum += rem;
        temp /= 10;
    }

    printf("Sum is : %d", sum);

    return 0;
}
