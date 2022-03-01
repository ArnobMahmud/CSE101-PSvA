/* Grade */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float phy, chem, math, bio, com, per;

    printf("Enter phy, chem, math, bio, com marks : \n");
    scanf("%f %f %f %f %f", &phy, &chem, &math, &bio, &com);

    per = ((phy + chem + math + bio + com) / 5);

    if (per >= 90)
    {
        printf("Grade A\n");
    }
    else if (per >= 80)
    {
        printf("Grade B\n");
    }
    else if (per >= 70)
    {
        printf("Grade C\n");
    }
    else if (per >= 60)
    {
        printf("Grade D\n");
    }
    else if (per >= 40)
    {
        printf("Grade E\n");
    }
    else
    {
        printf("Grade F\n");
    }

    return 0;
}
