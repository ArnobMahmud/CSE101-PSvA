/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

    int main(int argc, char const *argv[])
{
    char ch;

    printf("Enter a character :\n");
    scanf("%c", &ch);

    if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
        ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("%c is vowel.", ch);
    }
    else if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
    {
        printf("%c is consonant.", ch);
    }
    else if (ch == ' ' || ch == '\n' || ch == '\t')
    {
        printf("%c is white space.", ch);
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("%c is digit.", ch);
    }
    else
    {
        printf("%c is special character.", ch);
    }

    return 0;
}
