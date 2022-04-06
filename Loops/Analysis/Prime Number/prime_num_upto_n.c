/*
            Sample Input           Sample Output
                10                   2 3 5 7
*/

/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, flag, pc = 0;

    printf("Enter n : ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++)
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
    }

    printf("\nTotal prime number %d", pc);

    return 0;
}
