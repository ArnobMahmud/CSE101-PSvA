#include <stdio.h>
#include <string.h>

int main()
{
    char gender[10];
    int choice;

    puts("Enter choice :");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        strcpy(gender, "male");
        puts(gender);
        break;

    case 2:
        strcpy(gender, "female");
        puts(gender);
        break;

    default:
        strcpy(gender, "not");
        puts(gender);
    }
}