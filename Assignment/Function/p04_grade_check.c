/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

float grade(int mark)
{
    if (mark >= 90)
    {
        return 4.0;
    }
    else if (mark >= 80)
    {
        return 3.5;
    }
    else if (mark >= 70)
    {
        return 3.0;
    }
    else if (mark >= 60)
    {
        return 2.5;
    }
    else if (mark >= 50)
    {
        return 2.0;
    }
    else
    {
        return 0.0;
    }
}

int main(int argc, char const *argv[])
{
    float mark;

    printf("Enter mark : ");
    scanf("%f", &mark);

    printf("Grade is : %.2f", grade(mark));

    return 0;
}
