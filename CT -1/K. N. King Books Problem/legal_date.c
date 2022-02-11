/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int month, day, year;

    printf("Enter date (mm/dd/yyyy) :\n");
    scanf("%d %d %d", &month, &day, &year);

    if (day <= 0 || day >= 32)
    {
        printf("Invalid date.\n");
    }
    else
    {
        printf("Formatted date is :\n%d", day);
        switch (day)
        {
        case 1:
        case 21:
        case 31:
            printf("st ");
            break;
        case 2:
        case 22:
            printf("nd ");
            break;
        case 3:
        case 23:
            printf("rd ");
        default:
            printf("th ");
            break;
        }
    }
    if (month <= 0 || month >= 13)
    {
        printf("Invalid month.\n");
    }
    else
    {
        switch (month)
        {
        case 1:
            printf("January");
            break;
        case 2:
            printf("February");
            break;
        case 3:
            printf("March");
            break;
        case 4:
            printf("April");
            break;
        case 5:
            printf("May");
            break;
        case 6:
            printf("June");
            break;
        case 7:
            printf("July");
            break;
        case 8:
            printf("August");
            break;
        case 9:
            printf("September");
            break;
        case 10:
            printf("October");
            break;
        case 11:
            printf("November");
            break;
        case 12:
            printf("December");
            break;
        }
    }

    if (year <= 0)
    {
        printf("Invalid year.\n");
    }
    else
    {
        printf(", %d.", year);
    }

    return 0;
}
