/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char str1[20], str2[20];

    gets(str1);

    strrev(str1);
    strcpy(str2, str1);
    
    puts(str2);

    return 0;
}
