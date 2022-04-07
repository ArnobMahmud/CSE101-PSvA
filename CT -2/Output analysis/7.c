#include <stdio.h>

int main()
{
    int i = 0, sum = 0;

    for (i; !i; i = ++i)
    {
        sum = sum + i;
    }

    printf("%d\n", sum);
}

/*

*    if(expr == 0) is equivalent to if(!expr)
*    if(expr != 0) is equivalent to if(expr)


        int i = 0, sum = 0;
   =>   for (i; !i; i = ++i)

            i;    i == 0;    i = ++i

    It1 :   0       true

            sum = sum + i;
            sum = 0 + 0 = 0;
                                 1
                false (1 != 0)

        <- out of loop ->

        printf("%d\n", sum); // 0


*    if(expr == 0) is equivalent to if(!expr)
*    if(expr != 0) is equivalent to if(expr)


        int i = 0, sum = 0;
   =>   for (i; i; i = ++i)

            i;    i != 0;    i = ++i

    It1 :   0     false

        <- out of loop ->

        printf("%d\n", sum); // 0
*/