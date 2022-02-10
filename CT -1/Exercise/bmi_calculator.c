/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    char name[20];
    float height, weight, bmi;

    printf("Enter your name :\n");
    scanf("%s", &name);

    printf("Enter your height in inch :\n");
    scanf("%f", &height);

    printf("Enter your weight in kg :\n");
    scanf("%f", &weight);

    height *= 0.0254;

    bmi = weight / pow(height, 2);

    if (bmi <= 18)
    {
        printf("%s your BMI is %.2f.\nYou should have proper nutrition.\n", name, bmi);
    }
    else if (bmi <= 23.5)
    {
        printf("%s your BMI is %.2f.\nYou're having a better diet condition.\n", name, bmi);
    }else{
        printf("%s your BMI is %.2f.\nYou should have take proper exercise & control your diet.\n", name, bmi);
    }

    return 0;
}
