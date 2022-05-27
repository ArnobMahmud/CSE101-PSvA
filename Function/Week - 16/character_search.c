/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int charSearch(char str[], char ch)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            return 1;
        }
    }
    return 0;
}

void main(int argc, char const *argv[])
{
    char str[20], ch;
    int val;

    puts("Enter a string : ");
    gets(str);

    puts("Enter a letter you want to search : ");
    ch = getchar();

    val = charSearch(str, ch);

    if (val == 0)
    {
        puts("Not found");
    }
    else
    {
        puts("Found");
    }
}
