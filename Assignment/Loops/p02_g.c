/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n1, sum = 0, a = 1, b = 3, c = 4;

    printf("Enter n1 : ");
    scanf("%d", &n1);

    for (int i = 1; i <= n1; i++)
    {
        sum += (a * b * c);
        a++;
        b += 2;
        c += 2;
    }

    printf("Sum is : %d\n", sum);

    return 0;
}
