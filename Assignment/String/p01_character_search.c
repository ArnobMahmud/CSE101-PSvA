/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{

    int n, pos = -1;
    char ch[100], lt;

    printf("Enter word size : ");
    scanf("%d", &n);

    printf("Enter a word : ");
    scanf("%s", ch);

    printf("Which character you want to search? : ");
    scanf("%s", &lt);

    for (int i = 0; i < n; i++)
    {
        if (lt == ch[i])
        {
            pos = i + 1;
            break;
        }
    }

    if (pos != -1)
    {
        printf("%c found at index %d.", lt, pos);
    }
    else
    {
        printf("%c not found!", lt);
    }

    return 0;
}
