/*  Qn :
    Write a c program to take a string, starting index (inclusive), and ending index
    (exclusive) as input and print the substring as output.

            Sample Input        Sample Output
            Dept. of FE
                3 10                t. of F
*/

/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <string.h>

void main(int argc, char const *argv[])
{
    char str[20], sub[20];
    int inc, exc, i;

    gets(str);
    scanf("%d %d", &inc, &exc);

    for (i = inc; i < exc; i++)
    {
        sub[i - inc] = str[i];
    }

    sub[i - inc] = '\0';
    puts(sub);
}
