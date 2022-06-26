#include <stdio.h>

int main(int argc, char const *argv[])
{
    char *ch, letter = 'A';

    ch = &letter;

    printf("Address of letter by (&letter) : %d\n", &letter); // address of A
    printf("Address of letter by (ch) : %d\n", ch);           // address of A
    printf("ASCII value of letter : %d\n\n", letter);         // ASCII value of A

    printf("Value of letter by (letter): %c\n", letter);    // value of A
    printf("Value of letter by (*ch) : %c\n", *ch);         // value of A
    printf("Address of pointer *ch by (&ch) :  %d\n", &ch); // address of pointer ch

    return 0;
}
