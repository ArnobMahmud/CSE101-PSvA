#include <stdio.h>

int main(int argc, char const *argv[])
{
    char *str = "Hello";

    printf("%d\n", str);        // location of first character H -> 4210688
    printf("%c\n", *str);       // value of first character -> H
    printf("%c\n", *str + 3);   // H + 3 => K
    printf("%c\n", *(str + 3)); // l

    return 0;
}
