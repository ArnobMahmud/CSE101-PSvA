/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int charFreq(char str[])
{
    int count;
    for (char i = 'a'; i <= 'z'; i++)
    {
        count = 0;
        for (int j = 0; str[j] != '\0'; j++)
        {
            if (str[j] == i)
            {
                count++;
            }
        }

        if (count > 0)
        {
            printf("%c => %d\n", i, count);
        }
    }
}

void main(int argc, char const *argv[])
{
    char str[200];

    puts("Enter a string : ");
    gets(str);

    charFreq(str);
}
