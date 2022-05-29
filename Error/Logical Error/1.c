#include <stdio.h>

int main(int argc, char const *argv[])
{
    float a = 10;
    float b = 5;

    if (b = 0) // we wrote = instead of ==
    {
        printf("Division by zero is not possible");
    }
    else
    {
        printf("The output is: %f", a / b);
    }
}

/*  Ouput :
    The output is: inf

    INF signifies a division by zero error.
    In the above example, at line 8, we wanted to check
    whether the variable b was equal to zero.
    But instead of using the equal to comparison operator (==),
    we use the assignment operator (=).
    Because of this, the if statement became false and the value of b became 0.
    Finally, the else clause got executed.
*/