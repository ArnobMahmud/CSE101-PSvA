/*  Qn :
    Write a c program to take a student id using string as input and give his/her department
    name as output according to given table -

            |---------------------------|
            | Dept | Code | Dept | Code |
            |---------------------------|
            |  YE  |  11  |  TFD |  16  |
            |---------------------------|
            |  FE  |  12  |  IPE |  17  |
            |---------------------------|
            |  WPE |  13  | TMDM |  18  |
            |---------------------------|
            |  AE  |  14  |  DCE |  19  |
            |---------------------------|
            |  TEM |  15  |  ESE | 110  |
            |---------------------------|

         Sample Input     Sample Output
        2019-1-10-016         ESE
*/

/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char str[100];

    puts("Enter student ID :");
    gets(str);

    strrev(str);

    switch (str[4])
    {
    case '0':
        puts("ESE");
        break;
    case '1':
        puts("YE");
        break;
    case '2':
        puts("FE");
        break;
    case '3':
        puts("WPE");
        break;
    case '4':
        puts("AE");
        break;
    case '5':
        puts("TEM");
        break;
    case '6':
        puts("TFD");
        break;
    case '7':
        puts("IPE");
        break;
    case '8':
        puts("TMDM");
        break;
    default:
        puts("DCE");
        break;
    }

    return 0;
}
