/*
            Sample Input           Sample Output
                10                      29
                20                      71
*/

/*
  Author : Arnob Mahmud

  mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, j, n, pc = 0, flag;

    scanf("%d", &n);

    i = 2;
    while (pc != n) // for manually(without user input) change the value of n to get exact prime number.
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

    printf("\n%dth prime number is %d", n, i - 1);

    return 0;
}
