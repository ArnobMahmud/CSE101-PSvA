#include <stdio.h>

int main(int argc, char const *argv[])
{
    int speed;
    char prev_tct;

    printf("Enter the vehicle speed and previous ticket response :\n");
    scanf("%d %c", &speed, &prev_tct);

    if (speed <= 100 && (prev_tct == 'Y' || prev_tct == 'N'))
    {
        printf("Fine amount is 0 USD.\n");
    }
    else if (speed > 100 && speed <= 120)
    {
        if (prev_tct == 'N')
        {
            printf("Fine amount is 50 USD.\n");
        }
        else
        {
            printf("Fine amount is 150 USD.\n");
        }
    }
    else if (speed > 120)
    {
        if (prev_tct == 'N')
        {
            printf("Fine amount is 80 USD.\n");
        }
        else
        {
            printf("Fine amount is 150 USD.\n");
        }
    }
    else
    {
        printf("Invalid input.\n");
    }

    return 0;
}
