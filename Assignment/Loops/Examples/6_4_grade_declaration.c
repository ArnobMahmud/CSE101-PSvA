/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#define FIRST 400
#define SECOND 300

int main(int argc, char const *argv[])
{
    int n, m, ID, marks, sum;

    printf("Enter total students & subjects(5) : ");
    scanf("%d %d", &n, &m);

    for (int i = 1; i <= n; i++)
    {
        printf("Enter ID no : ");
        scanf("%d", &ID);

        sum = 0;
        printf("Enter obtained marks for %d subjects for  ID %d : ", m, ID);
        for (int j = 1; j <= m; j++)
        {
            scanf("%d", &marks);
            sum += marks;
        }
        printf("Total marks : %d\n", sum);
        if (sum >= FIRST)
        {
            printf("FIRST DIVISTION\n");
        }
        else if (sum >= SECOND)
        {
            printf("FIRST DIVISTION\n");
        }
        else
        {
            printf("FAIL!!!!!!!!!!!!!");
        }
    }

    return 0;
}
