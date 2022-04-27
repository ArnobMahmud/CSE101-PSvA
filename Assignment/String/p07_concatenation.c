/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char str1[10], str2[10], str3[10];

    puts("Enter first string : ");
    gets(str1);

    puts("Enter second string : ");
    gets(str2);

    puts("Enter third string : ");
    gets(str3);

    strcat(str1, " ");
    strcat(str1, str2);
    strcat(str1, " ");
    strcat(str1, str3);

    puts(str1);

    return 0;
}
