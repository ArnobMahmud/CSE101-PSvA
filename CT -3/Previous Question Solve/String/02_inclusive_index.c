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

int main(int argc, char const *argv[])
{
    char str[20], inc, exc;

    gets(str);

    putchar(inc);
    putchar(exc);

    for (int i = str[inc]; i <= str[exc]; i++)
    {
        printf("%c", str[i]);
    }

    return 0;
}
