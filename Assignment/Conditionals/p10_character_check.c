/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    char ch;

    printf("Enter a character : \n");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
    {
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
            ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            printf("%c is a vowel.\n", ch);
        }
        else
        {
            printf("%c is a consonant.\n", ch);
        }
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("%c is a number.\n", ch);
    }
    else if (ch == ' ' || ch == '\t' || ch == '\n')
    {
        printf("%c is a white space.\n", ch);
    }
    else
    {
        printf("%c is a special character.\n", ch);
    }

    return 0;
}
