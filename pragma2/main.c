#include <stdio.h>
#include <stdlib.h>

#pragma warn -rvl   /**< return value */
#pragma warn -par   /**< parameter not used */
#pragma warn -rch   /**< unreachable code */

int f1()
{
    int a=5;
}

int f2(int x)
{
    printf("inside f2");
}

int f3()
{
    int x=6;return x;
    x++;
}

int main()
{
    f1();
    f2(7);
    f3;

    return 0;
}
