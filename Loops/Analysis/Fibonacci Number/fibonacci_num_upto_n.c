/*
    Qn :            1 2 3 5 8 13 21 .......... N
*/

/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 1, b = 2, c = 0, n;

    printf("Enter n : ");
    scanf("%d", &n);
    
    if (n == 1)
    {
        printf("%d ", a);
    }
    else if (n == 2)
    {
        printf("%d %d ", a, b);
    }
    else
    {
        printf("%d %d ", a, b);
        c = a + b;

        while (c <= n)
        {
            printf("%d ", c);
            a = b;
            b = c;
            c = a + b;
        }
    }

    return 0;
}
