/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char str1[30], str2[30];
    int c;

    puts("Enter first string : ");
    gets(str1);

    puts("Enter second string : ");
    gets(str2);

    c = strcmp(str1, str2);

    if (c == 0)
    {
        puts("First string is equal to second string");
    }
    else if (c < 0)
    {
        puts("First string is less than second string");
    }
    else
    {
        puts("First string is greater than second string");
    }

    return 0;
}
