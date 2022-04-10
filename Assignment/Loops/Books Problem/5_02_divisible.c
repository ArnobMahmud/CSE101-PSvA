/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int sum = 0;
    
    for (int i = 101; i < 200; i++)
    {
        if (i % 7 == 0)
        {
            sum += i;
        }
    }

    printf("Sum is %d", sum);

    return 0;
}
