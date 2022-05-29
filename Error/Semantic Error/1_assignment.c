#include <stdio.h>

void main()
{
    int a, b, c;

    a *b = c;
    // This will generate a semantic error
}
/*  Output :
    error: lvalue required as left operand of assignment
*/