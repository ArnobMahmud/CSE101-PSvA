/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            printf("%d FizzBuzz\n", i);
        }
        else if (i % 3 == 0)
        {
            printf("%d Fizz\n", i);
        }
        else if (i % 5 == 0)
        {
            printf("%d Buzz\n", i);
        }
    }

    return 0;
}
