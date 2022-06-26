#include <stdio.h>

int main()
{
    char semester[10] = "fall";

    switch (semester)
    {
    case "fall":
        puts("It starts in September");
        
    case "spring":
        puts("It starts in January");
    }

    return 0;
}
