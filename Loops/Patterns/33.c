/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    for (int i = 1; i <= 10; i++)
    {
        if (i <= 5)
        {
            for (int k = 5; k >= i; k--)
            {
                printf(" ");
            }
            for (int j = 1; j <= i; j++)
            {
                printf("%d ", j);
            }

            printf("\n");
        }
        else
        {
            for (int k = 5; k <= i; k++)
            {
                printf(" ");
            }
            for (int j = 1; j <= i; j++)
            {
                printf("%d ", j);
            }

            printf("\n");
        }
    }

    return 0;
}

/*
        1
       12
      123
     1234
    12345
*/