/*  Qn :
    Write down a C program to reverse a string using string.h

                Sample Input         Sample Output
                    Mango                   ognaM
                    Tree                    eerT
*/

/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char str[20];

    gets(str);
    strrev(str);

    puts(str);
    
    return 0;
}
