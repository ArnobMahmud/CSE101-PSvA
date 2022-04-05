/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int ll, ul, pc = 0, flag;

    scanf("%d %d", &ll, &ul);

    for (int i = ll; i <= ul; i++)
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

        if (flag != 1 && i > 1)
        {
            printf("%d ", i);
            pc++;
        }
    }

    printf("\nTotal prime number %d", pc);

    return 0;
}
