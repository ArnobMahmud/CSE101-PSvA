/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, count = 0, rem;

    scanf("%d", &num);

    while (num != 0)
    {
        num /= 10;
        count++;
    }

    printf("Total digit : %d", count);

    return 0;
}
