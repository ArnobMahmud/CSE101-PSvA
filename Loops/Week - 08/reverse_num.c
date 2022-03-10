/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, rev, rem = 0;

    printf("Enter a number : ");
    scanf("%d", &num);

    while (num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }

    printf("Reversed num is %d", rev);

    return 0;
}
