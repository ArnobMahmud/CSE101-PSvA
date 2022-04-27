/*  Qn :
    Write a C function that takes two input. One is the dept. serial no. and another is
    the string. Put the dept. name according to the serial no. into the string and print
    the string from the main function.

                Sample Input         Sample Output
                   5  String              TEM
*/

/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <string.h>

void departmentSearch(int sn, char dept[5])
{
    switch (sn)
    {
    case 1:
        strcpy(dept, "YE");
        break;
    case 2:
        strcpy(dept, "FE");
        break;
    case 3:
        strcpy(dept, "WPE");
        break;
    case 4:
        strcpy(dept, "AE");
        break;
    case 5:
        strcpy(dept, "TEM");
        break;
    case 6:
        strcpy(dept, "TFD");
        break;
    case 7:
        strcpy(dept, "IPE");
        break;
    case 8:
        strcpy(dept, "TMDM");
        break;
    case 9:
        strcpy(dept, "DCE");
        break;
    default:
        strcpy(dept, "ESE");
        break;
    }
}

int main(int argc, char const *argv[])
{
    char dept[5];
    int sn;

    scanf("%d", &sn);
    departmentSearch(sn, dept);

    puts(dept);

    return 0;
}
