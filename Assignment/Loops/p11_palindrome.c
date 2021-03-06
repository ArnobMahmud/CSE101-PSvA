/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, temp, rem, rev = 0;

    printf("Enter a number : ");
    scanf("%d", &num);

    temp = num;

    while (num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }

    if (rev == temp)
    {
        printf("Palindrome.\n");
    }
    else
    {
        printf("Not Palindrome.\n");
    }

    return 0;
}
