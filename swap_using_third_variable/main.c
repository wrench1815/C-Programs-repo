#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;

    printf("Enter 2 numbers\n");
    scanf("%d\n%d", &a, &b);
    c=a;
    a=b;
    b=c;
    printf("Swapped values are\n%d %d", a, b);

    return 0;
}
