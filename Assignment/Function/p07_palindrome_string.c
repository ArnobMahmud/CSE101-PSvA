/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <string.h>

int palindromeCheck(char str1[])
{
    char str2[10];

    strcpy(str2, str1);
    strrev(str2);

    if (strcmp(str2, str1) == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void main(int argc, char const *argv[])
{

    char str1[10];

    puts("Enter a string : ");
    gets(str1);

    if (palindromeCheck(str1) == 1)
    {
        puts("Palindrome");
    }
    else
    {
        puts("Not Palindrome");
    }
}
