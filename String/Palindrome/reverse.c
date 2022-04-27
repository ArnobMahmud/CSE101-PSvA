/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char str1[10];

    puts("Enter a string : ");
    gets(str1);

    strrev(str1);

    puts("Reversed string : ");
    puts(str1);

    return 0;
}
