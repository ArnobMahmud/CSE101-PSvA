/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char ch, str[20];
    int count = 0;

    puts("Enter a string : ");
    gets(str);

    puts("Enter particular letter : ");
    ch = getchar();

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (ch == str[i])
        {
            count++;
        }
    }

    printf("%c => %d", ch, count);

    return 0;
}
