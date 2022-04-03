/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, rem, rev = 0, temp;

    scanf("%d", &num);

    temp = num;
    while (temp != 0)
    {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp /= 10;
    }

    printf("%d reversed is %d", num, rev);

    return 0;
}
