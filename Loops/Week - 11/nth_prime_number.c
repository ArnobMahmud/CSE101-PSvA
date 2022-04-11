/*
    Qn:      2 3 5 7 11 13 17 19 ................... Nth
*/

/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, j, N, flag, pc = 0;

    printf("Enter nth value : ");
    scanf("%d", &N);

    /* By while Loop*/
    i = 2;
    while (pc != N)
    {
        flag = 0;
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag != 1)
        {
            printf("%d ", i);
            pc++;
        }

        i++;
    }
    printf("\n%dth prime number is %d.\n", N, i - 1);

    /* By for Loop*/
    /* for (i = 2; pc != N; i++)
     {
         flag = 0;
         for (j = 2; j < i; j++)
         {
             if (i % j == 0)
             {
                 flag = 1;
                 break;
             }
         }
         if (flag != 1)
         {
             printf("%d ", i);
             pc++;
         }
     }
     printf("\n%dth prime number is %d.\n", N, i - 1); */

    return 0;
}
