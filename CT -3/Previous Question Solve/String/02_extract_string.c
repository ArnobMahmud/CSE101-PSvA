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
    char str[100];
    int inc, exc;

    gets(str);

    scanf("%d %d", &inc, &exc);

    for (int i = inc; i <= exc; i++)
    {
        printf("%c", str[i]);
    }

    return 0;
}
