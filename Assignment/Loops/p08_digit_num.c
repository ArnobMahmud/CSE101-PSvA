/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, count = 0;

    printf("Enter a number : ");
    scanf("%d", &num);

    while (num != 0)
    {
        count++;
        num /= 10;
    }

    printf("Total digit in num is : %d", count);

    return 0;
}
