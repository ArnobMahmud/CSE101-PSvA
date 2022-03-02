/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, temp, rem, count = 0;

    printf("Enter a number : ");
    scanf("%d", &n);

    temp = n;

    while (temp != 0)
    {
        rem = temp % 10;
        count++;
        temp /= 10;
    }

    printf("Total digit in num is : %d", count);

    return 0;
}
