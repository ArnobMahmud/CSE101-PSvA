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
    int N, flag, count = 0;

    printf("Enter nth number : ");
    scanf("%d", &N);

    for (int i = 2; i > 0; i++)
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
            count++;
            printf("%d ", i);
        }

        if (count == N)
        {
            printf("\n%dth prime number is %d.\n", N, i);
            break;
        }
    }

    return 0;
}
