/*  Qn :
    Write a program to swap two strings using a user defined function.

                Sample Input         Sample Output
                 S1: YE 45             S1: TEM 45
                 S1: TEM 45            S2: YE 45
*/

/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <string.h>

void swapString(char s1[50], char s2[50])
{
    char temp[50];

    strcpy(temp, s1);
    strcpy(s1, s2);

    puts("S1 : ");
    puts(s1);

    puts("S2 : ");
    puts(temp);
}

int main(int argc, char const *argv[])
{
    char s1[50], s2[50];

    puts("S1 : ");
    gets(s1);

    puts("S2 : ");
    gets(s2);

    swapString(s1, s2);

    return 0;
}
