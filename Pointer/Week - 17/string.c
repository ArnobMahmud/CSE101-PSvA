#include <stdio.h>

int main(int argc, char const *argv[])
{
    char *string = "BUTEX-46";

    puts(string); // value of string
    printf("%c\n", string);
    printf("%c\n", *string);
    printf("%c\n", *string + 10);
    printf("%c\n", *(string + 10));

    return 0;
}
