/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, temp, rev = 0, rem;

    scanf("%d", &num);

    temp = num;
    while (temp != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        temp /= 10;
    }

    if (num == rev)
    {
        printf("%d is a palindrome number.", num);
    }
    else
    {
        printf("%d is not a palindrome number.", num);
    }

    return 0;
}
