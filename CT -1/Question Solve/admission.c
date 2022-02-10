/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float ssc, ban, eng, math, ict, phy, chem, bio, hsc, sum;
    scanf("%f %f %f %f %f %f %f %f", &ssc, &ban, &eng, &math, &ict, &phy, &chem, &bio);

    hsc = (ban + eng + math + ict + phy + chem + (bio - 2)) / 6;
    /*printf("%.2f.\n", hsc);*/

    if (ssc >= 4.5 && hsc >= 4.5 && math >= 4.0 && phy >= 4.0 && chem >= 4.0 && eng >= 4.0 && (math + phy + chem + eng) >= 18.0)
    {
        sum = ssc * 8.0 + hsc * 12.0;
        printf("%.2f.\n", sum);
    }
    else
    {
        printf("Not eligible.\n");
    }

    return 0;
}
