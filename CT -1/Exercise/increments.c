/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, c;
    /*
        ++i => first increment then assign
        i++ => first assign then increment
    */
    a = 2;
    c = a++ + a++;
    /*
        [ value -> assigned value ]
        (2 -> 3) + (3 -> 4)
        c = 2 + 3 [value + value]
         = 5
    */
    printf("%d\n", c);

    a = 2;
    c = a++ + ++a;
    /*
        [ value -> assigned value ]
        (2 -> 3) + (4 -> 4)
        c = 2 + 4 [value + assigned value]
         = 6
    */
    printf("%d\n", c);

    a = 2;
    c = ++a + a++;
    /*
        [ value -> assigned value ]
        (3  4) + (3 -> 4)
        c = 4 + 3 [assigned value + value]
         = 7
   */
    printf("%d\n", c);

    a = 2;
    c = ++a + ++a;
    /*
        [ value -> assigned value ]
        (3 -> 4) + (4 -> 4)
        c = 4 + 4 [assigned value +  assigned value]
         = 8
   */
    printf("%d\n", c);

    return 0;
}
