/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    char ch[40];
    int cap_count, sml_count = 0;

    puts("Enter a string : ");
    gets(ch);

    for (int i = 0; ch[i] != '\0'; i++)
    {
        if (ch[i] >= 'a' && ch[i] <= 'z')
        {
            sml_count++;
        }
        else if (ch[i] >= 'A' && ch[i] <= 'Z')
        {
            cap_count++;
        }
    }

    printf("Capital letters : %d\nSmall letters : %d", cap_count, sml_count);

    return 0;
}
