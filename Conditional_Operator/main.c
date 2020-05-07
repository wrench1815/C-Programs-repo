#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, a=0, b=5, c=10;
    x=a>1?b>1||c>1?100:200:300;
    printf("x=%d",x);

    return 0;
}
