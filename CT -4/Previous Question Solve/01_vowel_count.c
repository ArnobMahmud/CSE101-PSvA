/*  Qn :
    Write a c program using function to count the vowels in a string. First, develop a
    function to check whether a character is vowel (1) or not (0). Then, use that function to
    count the vowels (output) in a string (input).

                Sample Input        Sample Output
            Dr. Md. Abdur Rahman        4
                Prof. Islam             3
*/

/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <string.h>

int isVowel(char ch)
{

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main(int argc, char const *argv[])
{
    char str[100];
    int count = 0;

    gets(str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (isVowel(str[i]) == 1)
        {
            count++;
        }
    }

    printf("%d", count);
    return 0;
}
