/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

    int main(int argc, char const *argv[])
{
    int phy, chem, bio, math, cp;
    float percentage;

    scanf("%d %d %d %d %d", &phy, &chem, &bio, &math, &cp);

    percentage = (phy + chem + bio + math + cp) / 5;

    if (percentage >= 90)
    {
        printf("Grade A+");
    }
    else if (percentage >= 80)
    {
        printf("Grade A");
    }
    else if (percentage >= 70)
    {
        printf("Grade B");
    }
    else if (percentage >= 60)
    {
        printf("Grade C");
    }
    else if (percentage >= 40)
    {
        printf("Grade D");
    }
    else
    {
        printf("Grade F");
    }

    return 0;
}
