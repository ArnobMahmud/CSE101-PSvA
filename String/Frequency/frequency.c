/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char str[10];
    int count;

    puts("Enter a string :");
    gets(str);

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

    return 0;
}
