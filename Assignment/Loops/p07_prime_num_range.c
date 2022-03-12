/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int ll, ul, flag, pc = 0;

    printf("Enter lower limit : ");
    scanf("%d", &ll);

    printf("Enter upper limit : ");
    scanf("%d", &ul);

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
        if (flag == 0)
        {
            pc++;
            printf("%d ", i);
        }
    }
    printf("\nTotal prime number : %d", pc);
    return 0;
}
