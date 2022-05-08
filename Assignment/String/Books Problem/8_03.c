/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char str[20];
    int d;

    puts("Enter a string : ");
    gets(str);

    printf("Enter extracted index : ");
    scanf("%d", &d);

    for (int i = d; str[i] != '\0'; i++)
    {
        printf("%c", str[i]);
    }

    return 0;
}
