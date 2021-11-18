/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int mark;

    printf("Enter the marks of the student :\n");
    scanf("%d", &mark);

    if (mark < 40)
    {
        printf("The student has been failed.");
    }
    else
    {
        printf("The student has been passed.");
    }

    return 0;
}
