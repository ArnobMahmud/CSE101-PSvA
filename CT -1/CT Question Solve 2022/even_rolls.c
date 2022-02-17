/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int d, m;
    scanf("%d", &d);

    m = (d / 10000);

    switch (m)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("31\n");
        break;
    case 2:
        printf("28/29\n");
        break;
        
    default:
        printf("30\n");
        break;
    }

    return 0;
}
