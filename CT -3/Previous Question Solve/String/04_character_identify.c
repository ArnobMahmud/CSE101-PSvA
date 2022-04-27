/*  Qn :
    Write a program to count the number of vowels, consonants, digits, white space
    and special characters in a string.
*/

/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    char ch[40];
    int vow_count, con_count, dgt_count, wsp_count, spc_count = 0;

    puts("Enter a string : ");
    gets(ch);

    for (int i = 0; ch[i] != '\0'; i++)
    {

        if (ch[i] >= 'a' && ch[i] <= 'z' || ch[i] >= 'A' && ch[i] <= 'Z')
        {

            if (ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u' ||
                ch[i] == 'A' || ch[i] == 'E' || ch[i] == 'I' || ch[i] == 'O' || ch[i] == 'U')
            {
                vow_count++;
            }
            else
            {
                con_count++;
            }
        }
        else if (ch[i] >= '0' && ch[i] <= '9')
        {
            dgt_count++;
        }
        else if (ch[i] == ' ' || ch[i] == '\t' || ch[i] == '\n')
        {
            wsp_count++;
        }
        else
        {
            spc_count++;
        }
    }

    printf("Vowels : %d\nConsonant : %d\nDigits : %d\nWhite Space : %d\nSpecial Character : %d\n", vow_count, con_count, dgt_count, wsp_count, spc_count);

    return 0;
}
