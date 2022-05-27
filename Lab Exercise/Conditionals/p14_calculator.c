/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    char op;
    float a, b;

    printf("Enter an expression : \n");
    scanf("%f %c %f", &a, &op, &b);

    switch (op)
    {
    case '+':
        printf("Value of %.2f %c %.2f is :  %.2f", a, op, b, a + b);
        break;

    case '-':
        printf("Value of %.2f %c %.2f is :  %.2f", a, op, b, a - b);
        break;

    case '*':
        printf("Value of %.2f %c %.2f is :  %.2f", a, op, b, a * b);
        break;

    case '/':
        if (b != 0)
        {
            printf("Value of %.2f %c %.2f is :  %.2f", a, op, b, a / b);
        }
        else
        {
            printf("Can't be divided by 0.");
        }
        break;

    case '%':
        if (b != 0)
        {
            printf("Value of %.2f %c %.2f is :  %d", a, op, b, (int)a % (int)b);
        }
        else
        {
            printf("Can't be divided by 0.");
        }
        break;

    default:
        printf("Invalid input.");
        break;
    }

    return 0;
}
