#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int i, N, count = 0, num = 2, letest = 0, flag;

    printf("Enter Nth Number : ");
    scanf("%d", &N);

    while (count != N)
    {
        flag = 0;
        for (i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            count++;
            letest = num;
        }
        num++;
    }

    printf("%dth prime number is %d ", N, letest);

    return 0;
}