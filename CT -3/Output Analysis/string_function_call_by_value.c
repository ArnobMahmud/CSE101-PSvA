// Call by value
#include <stdio.h>

void myName(char str[])
{
    puts("Inside my function : ");
    for (int i = 0; str[i] != '\0'; i++)
    {
        printf("%c", str[i]);
    }
}

int main(int argc, char const *argv[])
{
    char str[20] = "Arnob Mahmud";
    myName(str);

    puts("\nInside main function : ");
    puts(str);
}
