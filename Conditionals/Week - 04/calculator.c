/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    float a, b;
    char op;

    printf("Enter an expression : \n");
    scanf("%f %c %f", &a, &op, &b);

    switch (op)
    {
    case '+':
        printf("Result is = %.2f\n", a + b);
        break;
    case '-':
        printf("Result is = %.2f\n", a - b);
        break;
    case '*':
        printf("Result is = %.2f\n", a * b);
        break;
    case '/':
        if (b == 0)
        {
            printf("Division by zero is not possible.\n");
        }
        else
        {
            printf("Result is = %.2f\n", a / b);
        }
        break;
    case '%':
        if (b == 0)
        {
            printf("Division by zero is not possible.\n");
        }
        else
        {
            printf("Result is = %d\n", (int)a % (int)b);
        }
        break;

    default:
        printf("Invalid input");
        break;
    }
    return 0;
}
