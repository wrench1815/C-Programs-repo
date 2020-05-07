#include <stdio.h>
#include <stdlib.h>

int sum(int x, int y, int z);
int main()
{
    int a, b, c, d;

    printf("Enter three values\n");
    scanf("%d %d %d", &a, &b, &c);
    d=sum(a,b,c);
    printf("Sum of %d, %d and %d is %d\n", a, b, c, d);

    return 0;
}

int sum(int x, int y, int z)
{
    int add;

    add=x+y+z;

    return(add);
}
