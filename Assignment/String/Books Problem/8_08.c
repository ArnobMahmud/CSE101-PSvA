/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char str1[10], str2[10];
    int val;

    puts("Enter a string : ");
    gets(str1);

    strcpy(str2, str1);
    strrev(str2);

    val = strcmp(str2, str1);

    if (val == 0)
    {
        puts("Palindrome");
    }
    else
    {
        puts("Not Palindrome");
    }

    return 0;
}
