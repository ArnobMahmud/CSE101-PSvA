/*  Qn :
    Write a c program to take html code using string as input and print the number of
    special characters, i.e., &, ”, ’, <, and >, as output.

               Sample Input             Sample Output
        <body onload=alert('XSS')>          4
*/

/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char str[100];
    int count = 0;

    gets(str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '&' || str[i] == '"' || str[i] == '\'' ||
            str[i] == '<' || str[i] == '>')
        {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}
