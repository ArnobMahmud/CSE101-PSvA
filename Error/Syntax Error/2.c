#include <stdio.h>

int main(int argc, char const *argv[])
{
    var = 5; // we did not declare the data type of variable

    printf("The variable is: %d", var);
}

/*  Output :
    error: 'var' undeclared (first use in this function)
*/