/*  Qn :
    Write a program that will take a string and prints the words of that string in
    separate line.

                Sample Input         Sample Output
              Ice Breaking 2.0            Ice
                                        Breaking
                                          2.0
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

    gets(str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            printf("\n");
        }
        else
        {
            printf("%c", str[i]);
        }
    }

    return 0;
}
