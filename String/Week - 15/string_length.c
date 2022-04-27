/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char ch[20];
    int len;

    puts("Enter a string :");
    gets(ch);

    len = strlen(ch);
    printf("Length : %d", len);

    return 0;
}
