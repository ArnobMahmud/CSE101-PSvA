/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int seriesSum(int start, int num)
{
    if (num > 100)
    {
        return 0;
    }
    return num + seriesSum(start + 7, num);
}

void main(int argc, char const *argv[])
{
    int num;

    scanf("%d", &num);
    
    printf("%d", seriesSum(7, num));
}
