/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{

    int n, idx = -1;
    char ch[40], lt;

    puts("Enter a string : ");
    gets(ch);

    puts("Enter a letter you want to search : ");
    lt = getchar();

    for (int i = 0; ch[i] != '\0'; i++)
    {
        if (ch[i] == lt)
        {
            idx = i;
        }
    }

    if (idx == -1)
    {
        puts("Not found");
    }
    else
    {
        printf("Found at index : %d", idx);
    }

    return 0;
}
