#include <stdio.h>
#include <stdlib.h>

void swapv(int x, int y);
int main()
{
    int a=10, b=20;

    swapv(a,b);
    printf("a = %d \nb = %d\n",a,b);

    return 0;
}

void swapv(int x, int y)
{
    int t;
    t=x;
    x=y;
    y=t;
    printf("a = %d \nb = %d \n",x,y);
}
