/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int marks;

    printf("Enter the marks of the student :\n");
    scanf("%d", &marks);

    if (marks >= 90)
    {
        printf("Grade point is : 4.0");
    }
    else if (marks >= 80)
    {
        printf("Grade point is : 3.5");
    }
    else if (marks >= 70)
    {
        printf("Grade point is : 3.0");
    }
    else if (marks >= 60)
    {
        printf("Grade point is : 2.5");
    }
    else if (marks >= 50)
    {
        printf("Grade point is : 2");
    }
    else
    {
        printf("Grade point is : 0");
    }

    return 0;
}
