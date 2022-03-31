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
        return 2;
    }
}

int main(int argc, char const *argv[])
{
    int mark;

    printf("Enter mark : ");
    scanf("%d", &mark);

    printf("%.1f", grade(mark));
    
    return 0;
}
