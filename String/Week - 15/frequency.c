/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    char ch[30];
    int count;

    puts("Enter a string : ");
    gets(ch);

    for (char i = 'a'; i <= 'z'; i++)
    {
        count = 0;
        for (int j = 0; ch[j] != '\0'; j++)
        {
            if (ch[j] == i)
            {
                count++;
            }
        }
        if (count > 0)
        {
            printf("%c => %d\n", i, count);
        }
    }

    return 0;
}
