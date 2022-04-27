/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    char ch[20];
    int count = 0;

    puts("Enter a string : ");
    gets(ch);

    for (int i = 0; ch[i] != 0; i++)
    {
        if ((ch[i] >= 'a' && ch[i] <= 'z' || ch[i] >= 'A' && ch[i] <= 'Z') ||
            ch[i] >= '0' && ch[i] <= '9')
        {
            count++;
        }
    }

    if (count == 0)
    {
        printf("No alphanumeric character found.");
    }
    else
    {
        printf("%d", count);
    }

    return 0;
}
