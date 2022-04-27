/*  Qn :
    Write a c program to take three strings as input and print the combined form as output
    using appropriate spaces.

            Sample Input        Sample Output
                Dr.
                Najla        Dr. Najla Abdulrahman
            Abdulrahman
*/

/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char str1[20], str2[20], str3[20];

    gets(str1);
    gets(str2);
    gets(str3);

    strcat(str1, " ");
    strcat(str1, str2);
    strcat(str1, " ");
    strcat(str1, str3);

    puts(str1);

    return 0;
}
