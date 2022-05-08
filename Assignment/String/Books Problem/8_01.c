/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char str[20];

    puts("Enter your name : ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        printf("%d ", str[i]);
    }

    return 0;
}
