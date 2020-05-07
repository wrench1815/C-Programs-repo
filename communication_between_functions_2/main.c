#include <stdio.h>
#include <stdlib.h>

int com(int);
int main()
{
    int a=10;

    com(a);
    printf("a = %d\n",a);

    return 0;
}

int com(int b)
{
    b=20;
    printf("%d\n",b);
    return b;
}
