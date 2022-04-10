/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int marks, std, c1 = 0, c2 = 0, c3 = 0, c4 = 0;

    printf("Enter number of students : ");
    scanf("%d", &std);

    printf("Enter marks : ");
    for (int i = 1; i <= std; i++)
    {
        scanf("%d", &marks);

        if (marks > 80)
        {
            c1++;
        }
        else if (marks > 60)
        {
            c2++;
        }
        else if (marks > 40)
        {
            c3++;
        }
        else
        {
            c4++;
        }
    }

    printf("More than 80 marks obtained %d students.\n", c1);
    printf("More than 60 marks obtained %d students.\n", c2);
    printf("More than 40 marks obtained %d students.\n", c3);
    printf("Less than 40 marks obtained %d students.\n", c4);

    return 0;
}
