/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>

void hammingNum(int n)
{
    int count;

    for (int i = 1; i <= n; i++)
    {
        count = 0;
        for (int j = 1; j <= i && (i % 2 == 0 || i % 3 == 0 || i % 5 == 0); j++)
        {
            count++;
        }
        if (count >= 0)
        {
            printf("%d ", i);
        }
    }
}

int main(int argc, char const *argv[])
{
    int num;
    scanf("%d", &num);

    hammingNum(num);

    return 0;
}
