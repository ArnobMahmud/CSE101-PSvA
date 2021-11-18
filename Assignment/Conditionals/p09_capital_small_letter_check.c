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

    if (ch > 64 && ch < 91)
    {
        printf("%c is in uppercase character.\n", ch);
    }
    else
    {
        printf("%c is in lowercase character.\n", ch);
    }
    return 0;
}
