/*  Qn :
    Write a c program using function to convert day number(input) to 1st three letters of
    that day name as string(output).

                Sample Input        Sample Output
                    5                   Wed
                    2                   Sun
*/

/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <string.h>

void dayConvert(int day, char name[5])
{
    switch (day)
    {
    case 1:
        strcpy(name, "Sat");
        break;
    case 2:
        strcpy(name, "Sun");
        break;
    case 3:
        strcpy(name, "Mon");
        break;
    case 4:
        strcpy(name, "Tue");
        break;
    case 5:
        strcpy(name, "Wed");
        break;
    case 6:
        strcpy(name, "Thu");
        break;
    default:
        strcpy(name, "Fri");
        break;
    }
}

int main(int argc, char const *argv[])
{
    char name[5];
    int day;

    scanf("%d", &day);
    dayConvert(day, name);

    puts(name);

    return 0;
}
