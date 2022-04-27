/*  Qn :
    Write a c program to check whether a string is a palindrome or not
*/

/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char str1[50], str2[50];
    int c;

    gets(str1);
    strcpy(str2, str1);

    strrev(str2);
    c = strcmp(str1, str2);

    if (c == 0)
    {
        puts("Palindrome");
    }
    else
    {
        puts("Not Palindrome");
    }

    return 0;
}
