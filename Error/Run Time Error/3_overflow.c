#include <stdio.h>

int main(int argc, char const *argv[])
{
    int var = 2147483649;

    printf("%d", var);
}

/*  Output :
    -2147483647
    
    This is an integer overflow error. 
    The maximum value an integer can hold in C is 2147483647. 
    Since in the above example, we assigned 2147483649 to the variable var, 
    the variable overflows, and we get -2147483647 as the output 
    (because of the circular property).
*/
