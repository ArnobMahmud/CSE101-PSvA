/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char str1[10], str2[10];

    puts("Enter a string : ");
    gets(str1);

    puts("String 1 :");
    puts(str1);

    strcpy(str2, str1);

    puts("Coppied string :");
    puts(str2);

    return 0;
}
